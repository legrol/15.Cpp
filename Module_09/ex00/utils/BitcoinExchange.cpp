/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 12:26:07 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/19 22:53:50 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

/**
 * @brief BitcoinExchange::BitcoinExchange()
 * 
 * Default constructor for the BitcoinExchange class.
 * 
 * 
 * @brief BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
 * 
 * Copy constructor for the BitcoinExchange class.
 * Copies internal state from another instance.
 * 
 * @param copy 						The instance to copy from.
 * 
 * 
 * @brief BitcoinExchange::operator=(const BitcoinExchange &origin)
 * 
 * Assignment operator overload.
 * Copies the internal bitcoinPrice map.
 * 
 * @param origin 					The instance to copy from.
 * @return 							Reference to the assigned object.
 * 
 * 
 * @brief BitcoinExchange::~BitcoinExchange()
 * 
 * Destructor for the BitcoinExchange class.
 * 
 * 
 * @brief BitcoinExchange::ft_stof(const std::string &str)
 * 
 * Converts a string to a float using a stringstream.
 * 
 * @param str 						The string representation of a float.
 * @return 							The float value parsed from the string.
 * 
 * 
 * @brief BitcoinExchange::parseCsvData(std::ifstream &inputStream)
 * 
 * Parses a CSV file stream and populates the internal bitcoinPrice map.
 * Verifies date format and value integrity before storing.
 * 
 * @param inputStream 				The input stream from the CSV file.
 * 
 * 
 * @brief BitcoinExchange::fetchBitcoinPriceByDate(const std::string &dateStr)
 * 		  const
 * 
 * Retrieves the bitcoin price for a given date from the map.
 * If an exact match is not found, uses the closest earlier date.
 * 
 * @param dateStr 					The date string to look up.
 * @return 							The price as a float, or -1.0f if the 
 * 									date is invalid.
 * 
 * 
 * @brief BitcoinExchange::hasValidDateFormat(const std::string &dateStr) 
 * 		  const
 * 
 * Validates the format of a date string as YYYY-MM-DD.
 * 
 * @param dateStr 					The date string to validate.
 * @return 							true if the format is valid, false 
 * 									otherwise.
 * 
 * @brief BitcoinExchange::verifyExistingDate(const std::string &dateStr) 
 * 		  const
 * 
 * Checks whether the date is logically valid (year, month, day constraints).
 * 
 * @param dateStr 					The date string to verify.
 * @return 							true if the date is valid, false otherwise.
 * 
 * 
 * @brief BitcoinExchange::validateRateBounds(const std::string &rateStr) 
 * 		  const
 * 
 * Validates the format and value bounds of a given rate string.
 * Ensures it's non-negative, within limits, and properly formatted.
 * 
 * @param rateStr 					The string representation of the rate.
 * @return 							true if the rate is valid, false 
 * 									otherwise.
 * 
 */

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
	*this = copy;
}

BitcoinExchange const &BitcoinExchange::operator=(BitcoinExchange \
	const &origin)
{
	this->bitcoinPrice = origin.bitcoinPrice;
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{


}

float BitcoinExchange::ft_stof(const std::string &str)
{
	std::stringstream strStream(str);
	float nbr = 0;
	strStream >> nbr;
	return nbr;
}

void BitcoinExchange::parseCsvData(std::ifstream &inputStream)
{
	std::string line;
	bool first = true;
	while (std::getline(inputStream, line))
	{
		if (first)
		{
			first = false;
			continue ;
		}
		std::string::size_type pos = line.find(',');
		if (pos == std::string::npos)
		{
			std::cerr << RED ERR RESET YELLOW INPUT_ERR RESET << line \
			<< std::endl;
			continue ;
		}
		std::string date = line.substr(0, pos);
		std::string val  = line.substr(pos + 1);
		if (!verifyExistingDate(date))
		{
			std::cerr << RED ERR RESET YELLOW INVDATDT RESET << date \
			<< std::endl;
			continue ;
		}
		std::stringstream strStream(val);
		float valueFloat;
		if (!(strStream >> valueFloat))
		{
			std::cerr << RED ERR RESET YELLOW INVVALDT RESET << val \
			<< std::endl;
			continue ;
		}
		bitcoinPrice[date] = valueFloat;
	}
}

float BitcoinExchange::fetchBitcoinPriceByDate(const std::string &dateStr) \
const
{
	if (!verifyExistingDate(dateStr))
		return -1.0f;
	std::map<std::string, float>::const_iterator it = \
	bitcoinPrice.find(dateStr);
	if (it != bitcoinPrice.end()) 
		return it->second;

	it = bitcoinPrice.lower_bound(dateStr);
	if (it == bitcoinPrice.begin())
	{
		std::cerr << RED ERR RESET YELLOW NDTAVAL RESET << it->first \
		<< std::endl;
		return -1.0f;
	}
	if (it == bitcoinPrice.end() || it->first > dateStr)
		--it;
	return it->second;
}

bool BitcoinExchange::hasValidDateFormat(const std::string &dateStr) const
{
	if (dateStr.size() != 10 || dateStr[4] != '-' || dateStr[7] != '-')
	{
		std::cerr << RED ERR RESET YELLOW DATE_ERR RESET CYAN QT << dateStr \
		<< QT RESET << std::endl;
		return false;
	}
	return true;
}

bool BitcoinExchange::verifyExistingDate(const std::string &dateStr) const
{
	if (!hasValidDateFormat(dateStr))
		return false;

	int year  = std::atoi(dateStr.substr(0, 4).c_str());
	int month = std::atoi(dateStr.substr(5, 2).c_str());
	int day   = std::atoi(dateStr.substr(8, 2).c_str());

	if (year < MINYRDB)
	{
		std::cerr << RED ERR RESET YELLOW YEAR_ERR RESET << year << std::endl;
		return false;
	}
	if (month < 1 || month > 12)
	{
		std::cerr << RED ERR RESET YELLOW MONTH_ERR RESET << month \
		<< std::endl;
		return false;
	}
	
	bool leap = false;
	if (year % 4 == 0)
	{
		if (year % 100 != 0 || year % 400 == 0)
			leap = true;
	}
	int febDays;
	if (leap)
		febDays = 29;
	else
		febDays = 28;

	int mdays[] = {
		0,
		31,
		febDays,
		31, 30, 31, 30,
		31, 31, 30, 31,
		30, 31
	};

	if (day < 1 || day > mdays[month])
	{
		std::cerr << RED ERR RESET YELLOW DAY_ERR RESET << day << std::endl;
		return false;
	}
	return true;
}

bool BitcoinExchange::validateRateBounds(const std::string &rateStr) const
{
	if (rateStr.empty()
		|| rateStr.find_first_not_of(CHNFND) != std::string::npos
		|| rateStr[0] == '.' 
		|| rateStr[rateStr.size() - 1] == '.')
	{
		std::cerr << RED ERR RESET YELLOW INPUT_ERR RESET << rateStr \
		<< std::endl;
		return false;
	}
	if (rateStr[0] == '-')
	{
		std::cerr << RED ERR RESET YELLOW POSIT_ERR RESET << std::endl;
		return false;
	}
	if (rateStr.size() > 10 
		|| (rateStr.size() == 10 && rateStr > MAXINT))
	{
		std::cerr << RED ERR RESET YELLOW LARGE_ERR RESET << std::endl;
		return false;
	}
	return true;
}

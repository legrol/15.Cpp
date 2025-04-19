/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 12:26:07 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/19 14:27:04 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

/**
 * 
 * 
 * 
 * 
 */

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
	*this = copy;
}

BitcoinExchange const &BitcoinExchange::operator=(BitcoinExchange const &origin)
{
	this->bitcoinPrice = origin.bitcoinPrice;
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{


}

float BitcoinExchange::ft_stof(const std::string &str)
{
	std::stringstream ss(str);
	float n = 0;
	ss >> n;
	return n;
}

void BitcoinExchange::parseCsvData(std::ifstream &file)
{
    std::string line;
    bool first = true;
    while (std::getline(file, line))
    {
        if (first) { first = false; continue; }
        std::string::size_type pos = line.find(',');
        if (pos == std::string::npos)
        {
            std::cerr << INPUT_ERR << line << std::endl;
            continue;
        }
        std::string date = line.substr(0, pos);
        std::string val  = line.substr(pos + 1);
        if (!verifyExistingDate(date))
        {
            std::cerr << "Invalid date in data: " << date << std::endl;
            continue;
        }
        std::stringstream ss(val);
        float v;
        if (!(ss >> v))
        {
            std::cerr << "Invalid value in data: " << val << std::endl;
            continue;
        }
        bitcoinPrice[date] = v;
    }
}

float BitcoinExchange::fetchBitcoinPriceByDate(const std::string &date) const
{
    if (!verifyExistingDate(date)) return -1.0f;
    std::map<std::string, float>::const_iterator it = bitcoinPrice.find(date);
    if (it != bitcoinPrice.end()) return it->second;

    it = bitcoinPrice.lower_bound(date);
    if (it == bitcoinPrice.begin())
    {
        std::cerr << RED << "No data available before " << it->first << RESET << std::endl;
        return -1.0f;
    }
    if (it == bitcoinPrice.end() || it->first > date) --it;
    return it->second;
}

bool BitcoinExchange::hasValidDateFormat(const std::string &date) const
{
    if (date.size() != 10 || date[4] != '-' || date[7] != '-')
    {
        std::cerr << RED << DATE_ERR << "\"" << date << "\"" << RESET << std::endl;
        return false;
    }
    return true;
}

bool BitcoinExchange::verifyExistingDate(const std::string &date) const
{
    if (!hasValidDateFormat(date)) return false;

    int year  = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day   = std::atoi(date.substr(8, 2).c_str());

    if (year < 2009)
    {
        std::cerr << RED << YEAR_ERR << year << RESET << std::endl;
        return false;
    }
    if (month < 1 || month > 12)
    {
        std::cerr << RED << MONTH_ERR << month << RESET << std::endl;
        return false;
    }
    bool leap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    int mdays[] = {0,31, leap?29:28,31,30,31,30,31,31,30,31,30,31};
    if (day < 1 || day > mdays[month])
    {
        std::cerr << RED << DAY_ERR << day << RESET << std::endl;
        return false;
    }
    return true;
}

bool BitcoinExchange::validateRateBounds(const std::string &rate) const
{
    if (rate.empty()
        || rate.find_first_not_of("0123456789.-") != std::string::npos
        || rate[0] == '.' 
        || rate[rate.size() - 1] == '.')
    {
        std::cerr << RED << INPUT_ERR << rate << RESET << std::endl;
        return false;
    }
    if (rate[0] == '-')
    {
        std::cerr << RED << POSITIVE_ERR << RESET << std::endl;
        return false;
    }
    if (rate.size() > 10 
        || (rate.size() == 10 && rate > "2147483647"))
    {
        std::cerr << RED << LARGE_ERR << RESET << std::endl;
        return false;
    }
    return true;
}

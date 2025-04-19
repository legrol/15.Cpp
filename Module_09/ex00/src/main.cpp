/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 12:29:28 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/19 14:51:53 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

/**
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << std::endl;
		std::cout << RED ERR RESET YELLOW ARGERR RESET << std::endl;
		std::cout << std::endl;
		return (EXIT_FAILURE);
	}

	print_banner();
	
	// std::ifstream file(argv[1]);
	// if (!file.is_open())
	// {
	// 	std::cerr << RED << OPEN_ERR_FILE << RESET << std::endl;
	// 	return EXIT_FAILURE;
	// }

	// std::ifstream internal_db(DB_FILENAME);
	// if (!internal_db.is_open())
	// {
	// 	std::cerr << RED << OPEN_ERR_DB << RESET << std::endl;
	// 	return EXIT_FAILURE;
	// }

	// BitcoinExchange btc;
	// btc.parseCsvData(internal_db);

	// std::string line;
	// std::getline(file, line);

	// while (std::getline(file, line))
	// {
	// 	std::string::size_type pos = line.find('|');
	// 	if (pos == std::string::npos || line.size() < pos + 2)
	// 	{
	// 		std::cerr << RED << INPUT_ERR << line << RESET << std::endl;
	// 		continue;
	// 	}

	// 	std::string date     = line.substr(0, pos - 1);
	// 	if (!btc.hasValidDateFormat(date) || !btc.verifyExistingDate(date))
	// 		continue;

	// 	std::string buys_str = line.substr(pos + 2);
	// 	if (!btc.validateRateBounds(buys_str))
	// 		continue;

	// 	float buys = BitcoinExchange::ft_stof(buys_str);
	// 	if (buys < 0 || buys > 1000)
	// 	{
	// 		std::cerr << RED << BUYS_ERR << buys << RESET << std::endl;
	// 		continue;
	// 	}

	// 	float price = btc.fetchBitcoinPriceByDate(date);
	// 	if (price < 0)
	// 		continue;

	// 	std::cout << BLUE << date << RESET
	// 			  << " => " << GREEN << buys << RESET
	// 			  << " = " << std::fixed << std::setprecision(2)
	// 			  << GREEN << buys * price << RESET
	// 			  << std::endl;
	// }

	    // 2) Abrimos el fichero de input que nos pasan (fecha | valor)
		std::ifstream inputFile(argv[1]);
		if (!inputFile.is_open())
		{
			std::cerr << RED << OPEN_ERR_FILE << RESET << std::endl;
			return EXIT_FAILURE;
		}
	
		// 3) Abrimos la base de datos histórica
		std::ifstream dbFile(DB_FILENAME);
		if (!dbFile.is_open())
		{
			std::cerr << RED << OPEN_ERR_DB << RESET << std::endl;
			return EXIT_FAILURE;
		}
	
		// 4) Parseamos la base de datos
		BitcoinExchange btc;
		btc.parseCsvData(dbFile);
	
		// 5) Leemos línea a línea (saltamos cabecera)
		std::string line;
		std::getline(inputFile, line);
	
		while (std::getline(inputFile, line))
		{
			std::string::size_type pos = line.find('|');
			if (pos == std::string::npos || line.size() < pos + 2)
			{
				std::cerr << RED << INPUT_ERR << line << RESET << std::endl;
				continue;
			}
	
			std::string date    = line.substr(0, pos - 1);
			std::string amount  = line.substr(pos + 2);
	
			if (!btc.hasValidDateFormat(date) ||
				!btc.verifyExistingDate(date)     ||
				!btc.validateRateBounds(amount))
			{
				// los propios métodos ya imprimen el error adecuado
				continue;
			}
	
			float buys = BitcoinExchange::ft_stof(amount);
			if (buys < 0 || buys > 1000)
			{
				std::cerr << RED << BUYS_ERR << buys << RESET << std::endl;
				continue;
			}
	
			float price = btc.fetchBitcoinPriceByDate(date);
			if (price < 0)
				continue;
	
			std::cout << date
					  << " => " << buys
					  << " = "  << std::fixed << std::setprecision(2)
					  << (buys * price)
					  << std::endl;
		}
		
	
	return (EXIT_SUCCESS);
}

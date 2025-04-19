/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 12:29:28 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/19 16:01:21 by rdel-olm         ###   ########.fr       */
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
	
	// 2) Abrimos el fichero de input que nos pasan (fecha | valor)
	std::ifstream inputFile(argv[1]);
	if (!inputFile.is_open())
	{
		std::cerr << RED ERR RESET YELLOW OPENFL_ERR RESET << std::endl;
		return (EXIT_FAILURE);
	}
	
	// 3) Abrimos la base de datos histórica
	std::ifstream dbFile(DB_FILENAME);
	if (!dbFile.is_open())
	{
		std::cerr << RED ERR RESET YELLOW OPENDB_ERR RESET << std::endl;
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
			std::cerr << RED ERR RESET YELLOW INPUT_ERR RESET << line \
			<< std::endl;
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

		std::cout << GREEN	<< date	<< ARROW << buys << EQ << std::fixed \
		<< std::setprecision(2)	<< (buys * price) << RESET << std::endl;
	}

	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

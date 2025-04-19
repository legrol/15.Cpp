/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 12:29:28 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/19 22:56:11 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

/**
 * @brief int main(int argc, char **argv)
 * 
 * Entry point of the BitcoinExchange program.
 * 
 * This function takes a single argument: the path to an input file.
 * It validates the input, opens both the input and the internal CSV database,
 * loads the Bitcoin price history, and then processes each transaction from 
 * the file.
 * It prints the conversion of Bitcoin based on date and amount if all 
 * validations pass.
 * 
 * Error cases are handled gracefully, including:
 * - Invalid number of arguments
 * - Failure to open the input or database file
 * - Invalid line format in the input file
 * - Invalid date formats or out-of-bound values
 * 
 * @param argc 					Argument count (should be 2).
 * @param argv 					Argument vector (expects path to input file at 
 * 								argv[1]).
 * @return int 					EXIT_SUCCESS on success, EXIT_FAILURE on error.
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
	
	std::ifstream inputFile(argv[1]);
	if (!inputFile.is_open())
	{
		std::cerr << RED ERR RESET YELLOW OPENFL_ERR RESET << std::endl;
		return (EXIT_FAILURE);
	}
	
	std::ifstream dbFile(DB_FILENAME);
	if (!dbFile.is_open())
	{
		std::cerr << RED ERR RESET YELLOW OPENDB_ERR RESET << std::endl;
		return EXIT_FAILURE;
	}

	BitcoinExchange btc;
	btc.parseCsvData(dbFile);

	std::string line;
	std::getline(inputFile, line);

	while (std::getline(inputFile, line))
	{
		std::string::size_type pos = line.find('|');
		if (pos == std::string::npos || line.size() < pos + 2)
		{
			std::cerr << RED ERR RESET YELLOW INPUT_ERR RESET << line \
			<< std::endl;
			continue ;
		}

		std::string date    = line.substr(0, pos - 1);
		std::string amount  = line.substr(pos + 2);

		if (!btc.hasValidDateFormat(date) ||
			!btc.verifyExistingDate(date)     ||
			!btc.validateRateBounds(amount))
			continue ;

		float purchaseAmount = BitcoinExchange::ft_stof(amount);
		if (purchaseAmount < MINPURCH || purchaseAmount > MAXPURCH)
		{
			std::cerr << RED ERR RESET YELLOW PURCHAM_ERR RESET << \
			purchaseAmount << std::endl;
			continue ;
		}

		float price = btc.fetchBitcoinPriceByDate(date);
		if (price < 0)
			continue ;

		std::cout << GREEN << date << ARROW RESET CYAN << purchaseAmount << \
		RESET YELLOW EQ RESET << std::fixed << std::setprecision(2) << WHITE \
		<< (purchaseAmount * price) << RESET << std::endl;
	}

	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 12:19:45 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/19 22:46:57 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// ============================================================================
// Libraries
// ============================================================================
# include <iostream>			// std::cout, std::cerr, std::endl, ...
# include <cstdlib>				// use to EXIT_FAILURE, EXIT_SUCCESS ...
# include <string>				// std::string ...
# include <map>					// for container map
# include <fstream>				// to readfile, ifstream, ofstream, ...
# include <iomanip>				// std::setprecision, set::fixed ...
# include <sstream>				// std::stringstream, ...
# include <cctype>     			// para std::isdigit


// ============================================================================
// Access to my libraries
// ============================================================================
#include "macros.hpp"
#include "colors.hpp"

// ============================================================================
// Mandatory
// ============================================================================
class BitcoinExchange
{
	private:

		std::map<std::string, float> bitcoinPrice;
		
	public:

		static float ft_stof(const std::string &str);
		
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &copy);
		BitcoinExchange const &operator=(BitcoinExchange const &origin);		
		~BitcoinExchange();

		void parseCsvData(std::ifstream &inputStream);
		float fetchBitcoinPriceByDate(const std::string &dateStr) const;
    	bool hasValidDateFormat(const std::string &dateStr) const;
    	bool verifyExistingDate(const std::string &dateStr) const;
    	bool validateRateBounds(const std::string &rateStr) const;
		
};

// ============================================================================
// Other Functions
// ============================================================================
void			print_banner();

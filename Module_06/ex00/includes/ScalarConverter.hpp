/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:34:14 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/30 19:26:13 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// ============================================================================
// Libraries
// ============================================================================
# include <iostream>			// std::cout, std::cerr, std::endl, ...
# include <string>				// std::string
# include <cstdlib>				// use to EXIT_FAILURE, EXIT_SUCCESS ...
# include <limits>				// fort numeric_limits
# include <cctype>				// for isdigit ...
# include <iomanip>				// std::setprecision
# include <cerrno>				// for errno and ERANGE...

// ============================================================================
// Access to my libraries
// ============================================================================
#include "macros.hpp"
#include "colors.hpp"

class ScalarConverter
{
	private:

		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter & operator=(const ScalarConverter &origin);
		~ScalarConverter();

	public:

		static void convert(const std::string &input);
};

// ============================================================================
// Functions
// ============================================================================
void			print_banner();

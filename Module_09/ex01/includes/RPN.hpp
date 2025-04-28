/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-28 07:53:17 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-04-28 07:53:17 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// ============================================================================
// Libraries
// ============================================================================
# include <iostream>			// std::cout, std::cerr, std::endl, ...
# include <cstdlib>				// use to EXIT_FAILURE, EXIT_SUCCESS ...
# include <string>				// std::string ...
# include <stack>				// std::stack<type> ...
// # include <map>					// for container map
// # include <fstream>				// to readfile, ifstream, ofstream, ...
// # include <iomanip>				// std::setprecision, set::fixed ...
// # include <sstream>				// std::stringstream, ...
// # include <cctype>     			// para std::isdigit

// ============================================================================
// Access to my libraries
// ============================================================================
#include "macros.hpp"
#include "colors.hpp"

// ============================================================================
// Mandatory
// ============================================================================
void RPN(std::string str);

// ============================================================================
// Other Functions
// ============================================================================
void			print_banner();

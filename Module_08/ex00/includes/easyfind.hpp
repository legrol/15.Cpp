/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:23:32 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/20 20:08:04 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// ============================================================================
// Libraries
// ============================================================================
# include <iostream>			// std::cout, std::cerr, std::endl, ...
# include <string>				// std::string
# include <cstdlib>				// use to EXIT_FAILURE, EXIT_SUCCESS ...
# include <unistd.h>			// for sleep, ...
# include <stdlib.h>			// for srand, ...
# include <algorithm>			// to access various algorithms ...
# include <vector>				// for container vector
# include <list>				// for container list
# include <map>					// for container map

// ============================================================================
// Access to my libraries
// ============================================================================
#include "macros.hpp"
#include "colors.hpp"

// ============================================================================
// Exception Management 
// ============================================================================
class FindException: public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ERRFIND;
				}
		};

// ============================================================================
// Templates functions
// ============================================================================
template <typename T>
bool easyfind(T &containerInt, int i);

// ============================================================================
// Access to my templates libraries
// ============================================================================
#include "easyfind.tpp"

// ============================================================================
// Functions
// ============================================================================
void			print_banner();

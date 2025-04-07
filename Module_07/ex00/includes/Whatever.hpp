/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-07 08:20:38 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-04-07 08:20:38 by rdel-olm         ###   ########.fr       */
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

// ============================================================================
// Access to my libraries
// ============================================================================
#include "macros.hpp"
#include "colors.hpp"

// ============================================================================
// Templates functions
// ============================================================================

template <typename T>
T max(T &one, T &two)
{
	if (one > two)
		return one;
	else
		return two;
}

template <typename T>
T min(T &one, T &two)
{
	if (one < two)
		return one;
	else
		return two;
}

template <typename T>
void swap(T &one, T &two)
{
	T three;
	
	three = one;
	one = two;
	two = three;
}

// ============================================================================
// Functions
// ============================================================================
void			print_banner();

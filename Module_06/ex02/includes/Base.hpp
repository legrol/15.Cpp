/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-31 09:52:22 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-03-31 09:52:22 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// ============================================================================
// Libraries
// ============================================================================
# include <iostream>			// std::cout, std::cerr, std::endl, ...
# include <string>				// std::string
# include <cstdlib>				// use to EXIT_FAILURE, EXIT_SUCCESS ...
# include <stdint.h>			// for uintptr_t ...
# include <ctime>				// for time(), ...
# include <unistd.h>			// for sleep, ...
# include <stdlib.h>			// for srand, ...

// ============================================================================
// Access to my libraries
// ============================================================================
#include "macros.hpp"
#include "colors.hpp"

class Base
{
	private:



	public:

		virtual ~Base();

};

// ============================================================================
// Functions
// ============================================================================
void			print_banner();

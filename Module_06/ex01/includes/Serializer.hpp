/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 21:32:07 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/30 21:45:11 by rdel-olm         ###   ########.fr       */
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

// ============================================================================
// Access to my libraries
// ============================================================================
#include "macros.hpp"
#include "colors.hpp"

struct Data
{
	int number;
};

class Serializer
{
	private:

		Serializer();
		Serializer(const Serializer &copy);
		Serializer & operator=(const Serializer &origin);
		~Serializer();

	public:

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

// ============================================================================
// Functions
// ============================================================================
void			print_banner();
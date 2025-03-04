/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:57:07 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/02 17:25:29 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

// ============================================================================
// Libraries
// ============================================================================
# include <iostream>			// std::cout, std::endl, ...
# include <string>				// std::string
# include <cstdlib>				// use to EXIT_FAILURE, EXIT_SUCCESS...

// ============================================================================
// Access to my libraries
// ============================================================================
#include "macros.hpp"
#include "colors.hpp"
#include "Brain.hpp"

class Animal
{
	protected:

		std::string type;

	public:

		Animal(void);
		Animal(const Animal& copy);
		Animal &operator=(const Animal &origin);
		virtual ~Animal();

		std::string getType(void) const;
		virtual void makeSound() const;

		//get
};

// ============================================================================
// Functions
// ============================================================================
void			print_banner();

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:49:32 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/02 21:13:53 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

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

class WrongAnimal
{
	protected:

		std::string type;

	public:
	
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& copy);
		WrongAnimal &operator=(const WrongAnimal &origin);
		virtual ~WrongAnimal();

		std::string getType(void) const;
		void makeSound() const;

};

#endif
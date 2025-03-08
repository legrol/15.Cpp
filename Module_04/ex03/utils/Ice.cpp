/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:20:13 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/08 23:04:13 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"
#include "../includes/ICharacter.hpp"

/**
 * @brief Implementation of the Ice class.
 *
 * This file defines the methods of the `Ice` class, which represents an 
 * ice-type materia.
 * It inherits from `AMateria` and implements the `clone` and `use` methods.
 * 
 * 
 * @brief Default constructor for `Ice`.
 *
 * Initializes an `Ice` materia with the type `"ice"`, inherited from 
 * `AMateria`.
 * 
 * 
 * @brief Copy constructor for `Ice`.
 *
 * Creates a new `Ice` object as a copy of an existing one.
 *
 * @param copy  				A reference to the `Ice` object to be copied.
 * 
 * 
 * @brief Overloaded assignment operator `operator=`.
 *
 * Copies the attributes of one `Ice` object to another, ensuring correct 
 * assignment.
 *
 * @param origin  				A reference to the `Ice` object whose data 
 * 								will be copied.
 * @return Ice&  				A reference to the updated `Ice` object.
 * 
 * 
 * @brief Destructor for `Ice`.
 *
 * Releases the resources of the `Ice` object and prints a destruction 
 * message.
 * 
 * 
 * @brief Clones the `Ice` object.
 *
 * Creates a new dynamically allocated `Ice` object as a copy of the current 
 * instance.
 *
 * @return AMateria*  			A pointer to the newly created `Ice` object.
 * 
 * 
 * @brief Uses the `Ice` materia on a target.
 *
 * Displays a message indicating that the target is being hit with an ice 
 * attack.
 *
 * @param target  				A reference to the `ICharacter` object 
 * 								receiving the ice effect.
 * 
 */

Ice::Ice(void): AMateria("ice")
{
	std::cout << this->type << CYAN OB_CR_DFD RESET << std::endl;
}

Ice::Ice(const Ice &copy): AMateria(copy)
{
	std::cout << this->type << CYAN OBJ_CP RESET << std::endl;
}

Ice &Ice::operator=(const Ice &origin)
{
	this->type = origin.type;
	std::cout << this->type << CYAN OPR_ASG RESET << std::endl;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << this->type << CYAN OBJ_DT RESET << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << ICE_INIT << target.getName() << ICE_FNL << std::endl;
}

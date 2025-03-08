/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:19:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/08 23:00:51 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"
#include "../includes/ICharacter.hpp"

/**
 * @brief Implementation of the Cure class.
 *
 * This file defines the methods of the `Cure` class, which represents a 
 * healing materia.
 * It inherits from `AMateria` and implements the `clone` and `use` methods.
 * 
 * 
 * @brief Default constructor for `Cure`.
 *
 * Initializes a `Cure` materia with the type `"cure"`, inherited from 
 * `AMateria`.
 * 
 * 
 * @brief Copy constructor for `Cure`.
 *
 * Creates a new `Cure` object as a copy of an existing one.
 *
 * @param copy  			A reference to the `Cure` object to be copied.
 * 
 * 
 * @brief Overloaded assignment operator `operator=`.
 *
 * Copies the attributes of one `Cure` object to another, ensuring correct 
 * assignment.
 *
 * @param origin  			A reference to the `Cure` object whose data will
 * 							be copied.
 * @return Cure&  			A reference to the updated `Cure` object.
 * 
 * 
 * @brief Destructor for `Cure`.
 *
 * Releases the resources of the `Cure` object and prints a destruction 
 * message.
 * 
 * 
 * @brief Clones the `Cure` object.
 *
 * Creates a new dynamically allocated `Cure` object as a copy of the 
 * current instance.
 *
 * @return AMateria* 		A pointer to the newly created `Cure` object.
 * 
 * 
 * @brief Uses the `Cure` materia on a target.
 *
 * Displays a message indicating that the target is being healed.
 *
 * @param target  			A reference to the `ICharacter` object receiving 
 * 							the cure effect.
 * 
 */

Cure::Cure(void): AMateria("cure")
{
	std::cout << this->type << CYAN OB_CR_DFD RESET << std::endl;
}

Cure::Cure(const Cure &copy): AMateria(copy)
{
	std::cout << this->type << CYAN OBJ_CP RESET << std::endl;
}

Cure &Cure::operator=(const Cure &origin)
{
	this->type = origin.type;
	std::cout << this->type << CYAN OPR_ASG RESET << std::endl;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << this->type << CYAN OBJ_DT RESET << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << CURE_INIT << target.getName() << CURE_FNL << std::endl;
}

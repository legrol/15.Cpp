/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:57:56 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/02 22:40:28 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

/**
 * @brief Default constructor for the `Animal` class.
 *
 * `Animal::Animal(void) : type("Animal")`
 * 
 * This constructor initializes an `Animal` object with a default type of ..
 * `"Animal"`.
 * It prints a message indicating the creation of an `Animal` instance.
 * 
 * 
 * @brief Copy constructor for the `Animal` class.
 *
 * `Animal::Animal(const Animal& copy)`
 * 
 * This constructor creates a new `Animal` object as a copy of an existing one.
 * It copies the `type` attribute from the original `Animal` object.
 *
 * @param copy 				Reference to the `Animal` object to be copied.
 * 
 * 
 * @brief Overloaded assignment operator for the `Animal` class.
 *
 * `Animal& Animal::operator=(const Animal &origin)`
 * 
 * Copies the attributes of one `Animal` object to another.
 * If the assigned object is not the same as the source, it updates its type.
 *
 * @param origin 			Reference to the `Animal` object being assigned.
 * @return 					Animal& Reference to the assigned object.
 * 
 * 
 * @brief Destructor for the `Animal` class.
 *
 * `Animal::~Animal(void)`
 * 
 * This function is called when an `Animal` object goes out of scope.
 * It prints a message confirming the destruction of the object.
 * 
 * 
 * @brief Retrieves the type of the `Animal`.
 *
 * `std::string Animal::getType(void) const`
 * 
 * This function returns the `type` attribute of the `Animal` instance.
 *
 * @return 						std::string The type of the `Animal`.
 * 
 * 
 * @brief Makes a generic animal sound.
 *
 * `void Animal::makeSound() const`
 * 
 * This function prints a default message indicating that the `Animal`
 * does not have a specific sound. It is expected to be overridden by 
 * derived classes.
 * 
 */

Animal::Animal(void) : type("Animal")
{
	std::cout << CYAN DFLT_INI RESET << this->type << CYAN DFLT_POS RESET \
	<< DFLT_ANI << std::endl;
}

Animal::Animal(const Animal& copy)
{
	this->type = copy.type;
	std::cout << this->type  << CYAN DFLT_CPY RESET << DFLT_ANI << std::endl;
}

Animal &Animal::operator=(const Animal &origin)
{
	if (this != &origin)
		this->type = origin.type;
	return (*this);	
}

Animal::~Animal(void)
{
	std::cout << CYAN DFLT_DST RESET << this->type << CYAN DFLT_POS RESET \
	<< DFLT_ANI << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << YELLOW WOSOUND RESET << std::endl;
}

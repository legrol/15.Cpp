/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 01:13:48 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/02 22:46:48 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

/**
 * @brief Default constructor for the `Dog` class.
 *
 * This constructor initializes a `Dog` object by calling the 
 * `Animal` constructor and setting its type to `"Dog"`.
 * It prints a message indicating the creation of a `Dog` instance.
 * 
 * 
 * @brief Copy constructor for the `Dog` class.
 *
 * This constructor creates a new `Dog` object as a copy of an existing one.
 * It calls the copy constructor of the `Animal` class and retains the type 
 * of the original object.
 *
 * @param copy Reference to the `Dog` object to be copied.
 * 
 * 
 * @brief Overloaded assignment operator for the `Dog` class.
 *
 * Copies the attributes of one `Dog` object to another.
 * If the assigned object is not the same as the source, it updates its type.
 *
 * @param origin Reference to the `Dog` object being assigned.
 * @return Dog& Reference to the assigned object.
 * 
 * 
 * @brief Destructor for the `Dog` class.
 *
 * This function is called when a `Dog` object goes out of scope.
 * It prints a message confirming the destruction of the object.
 * 
 * 
 * @brief Makes a sound specific to the `Dog` class.
 *
 * This function prints a predefined sound that `Dog` makes.
 * Since `makeSound()` is a virtual function, it overrides the base class 
 * implementation in `Animal`, ensuring polymorphic behavior.
 * 
 */

Dog::Dog(void): Animal()
{
	this->type = "Dog";
	std::cout << MAGENTA DFLT_INI RESET << this->type << MAGENTA DFLT_POS \
	RESET << DFLT_DOG << std::endl;
}
 
Dog::Dog(const Dog& copy): Animal(copy)
{
	this->type = copy.type;
	std::cout << this->type << MAGENTA DFLT_CPY RESET << DFLT_DOG << std::endl;	
}

Dog &Dog::operator=(const Dog &origin)
{
	Animal::operator=(origin);
	if (this != &origin)
		this->type = origin.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << MAGENTA DFLT_DST RESET << this->type << MAGENTA DFLT_POS \
	RESET << DFLT_DOG << std::endl;
}

void Dog::makeSound() const
{
	std::cout << YELLOW DOG_SOUND RESET << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:50:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/02 22:55:17 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

/**
 * @brief Default constructor for the `WrongCat` class.
 *
 * This constructor initializes a `WrongCat` object by calling the 
 * `WrongAnimal` constructor and setting its type to `"WrongCat"`.
 * It prints a message indicating the creation of a `WrongCat` instance.
 * 
 * 
 * @brief Copy constructor for the `WrongCat` class.
 *
 * This constructor creates a new `WrongCat` object as a copy of an existing 
 * one.
 * It calls the copy constructor of the `WrongAnimal` class and retains the 
 * type of the original object.
 *
 * @param copy Reference to the `WrongCat` object to be copied.
 * 
 * 
 * @brief Overloaded assignment operator for the `WrongCat` class.
 *
 * Copies the attributes of one `WrongCat` object to another.
 * If the assigned object is not the same as the source, it updates its type.
 *
 * @param origin Reference to the `WrongCat` object being assigned.
 * @return WrongCat& Reference to the assigned object.
 * 
 * 
 * @brief Destructor for the `WrongCat` class.
 *
 * This function is called when a `WrongCat` object goes out of scope.
 * It prints a message confirming the destruction of the object.
 * 
 * 
 * @brief Makes a sound specific to the `WrongCat` class.
 *
 * This function prints a predefined sound. Unlike `Cat::makeSound()`, this 
 * function does not use virtual methods, meaning it does not allow proper 
 * polymorphism when called through a `WrongAnimal*` pointer.
 * 
 */

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	// this->type = "Animal";
	std::cout << CYAN DFLT_INI RESET << this->type << CYAN DFLT_POS RESET \
	<< DFLT_WAN << std::endl;
}
  
WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	this->type = copy.type;
	std::cout << CYAN DFLT_CPY RESET << this->type << CYAN DFLT_POS RESET \
	<< DFLT_WAN << std::endl;
}
 
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &origin)
{
	if (this != &origin)
		this->type = origin.type;
	return (*this);	
}
 
WrongAnimal::~WrongAnimal(void)
{
	std::cout << CYAN DFLT_DST RESET << this->type << CYAN DFLT_POS RESET \
	<< DFLT_WAN << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << YELLOW RRSOUND RESET << std::endl;
}

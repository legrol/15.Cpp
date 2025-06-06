/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:51:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/02 22:57:31 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

/**
 *@brief Default constructor for the `WrongCat` class.
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

WrongCat::WrongCat(void): WrongAnimal() 
{
	this->type = "WrongCat";
	std::cout << MAGENTA DFLT_INI RESET << this->type << MAGENTA DFLT_POS \
	RESET << DFLT_CAT2 << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy): WrongAnimal(copy)
{
	this->type = copy.type;
	std::cout << this->type << MAGENTA DFLT_CPY RESET << DFLT_CAT2 << std::endl;
}
 
WrongCat &WrongCat::operator=(const WrongCat &origin)
{
	WrongAnimal::operator=(origin);
	if (this != &origin)
		this->type = origin.type;
	return (*this); 
}
 
WrongCat::~WrongCat(void)
{
	std::cout << MAGENTA DFLT_DST RESET << this->type << MAGENTA DFLT_POS \
	RESET << DFLT_CAT2 << std::endl; 
}

void WrongCat::makeSound() const
{
	std::cout << YELLOW DOG_SOUND RESET << std::endl;
}

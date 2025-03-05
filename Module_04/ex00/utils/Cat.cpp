/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 01:14:25 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/02 22:44:04 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

/**
 * @brief Default constructor for the `Cat` class.
 *
 * `Cat::Cat(void)`
 * 
 * This constructor initializes a `Cat` object, setting its `type` to `"Cat"`.
 * It prints a message confirming the creation of the object.
 * 
 * 
 * @brief Copy constructor for the `Cat` class.
 *
 * `Cat::Cat(const Cat& copy)`
 * 
 * This constructor creates a new `Cat` object as a copy of an existing one.
 * It copies the `type` attribute from the original `Cat` object.
 *
 * @param copy 					Reference to the `Cat` object to be copied.
 * 
 * 
 * @brief Overloaded assignment operator for the `Cat` class.
 *
 * `Cat& Cat::operator=(const Cat &origin)`
 * 
 * This operator assigns the attributes of one `Cat` instance to another.
 * It ensures that the new object retains the values of the original `Cat`.
 *
 * @param origin 				Reference to the `Cat` object being assigned.
 * @return 						Cat& Reference to the assigned object.
 * 
 * 
 * @brief Destructor for the `Cat` class.
 *
 * `Cat::~Cat(void)`
 * 
 * This function is called when a `Cat` object goes out of scope.
 * It prints a message confirming the destruction of the `Cat` object.
 * 
 * 
 * @brief Generates the sound of a `Cat`.
 *
 * `void Cat::makeSound() const`
 * 
 * This function prints a message representing the sound a `Cat` makes.
 * 
 */

Cat::Cat(void): Animal() 
{
	this->type = "Cat";
	std::cout << MAGENTA DFLT_INI RESET << this->type << MAGENTA DFLT_POS \
	RESET << DFLT_CAT << std::endl;
}

Cat::Cat(const Cat& copy): Animal(copy)
{
	this->type = copy.type;
	std::cout << this->type << MAGENTA DFLT_CPY RESET << DFLT_CAT << std::endl;
}

Cat &Cat::operator=(const Cat &origin)
{
	if (this != &origin)
	{
		Animal::operator=(origin);
		this->type = origin.type;
	}		
	return (*this); 
}

Cat::~Cat(void)
{
	std::cout << MAGENTA DFLT_DST RESET << this->type << MAGENTA DFLT_POS \
	RESET << DFLT_CAT << std::endl; 
}

void Cat::makeSound() const
{
	std::cout << YELLOW CAT_SOUND RESET << std::endl;
}

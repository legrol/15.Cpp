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
 * @brief Default constructor for the `WrongAnimal` class.
 *
 * `WrongAnimal::WrongAnimal(void)`
 * 
 * This constructor initializes a `WrongAnimal` object, setting its `type` 
 * to `"WrongAnimal"`. It prints a message confirming the creation of the 
 * object.
 * 
 * 
 * @brief Copy constructor for the `WrongAnimal` class.
 *
 * `WrongAnimal::WrongAnimal(const WrongAnimal& copy)`
 * 
 * This constructor creates a new `WrongAnimal` object as a copy of an 
 * existing one. It copies the `type` attribute from the original object.
 *
 * @param copy 					Reference to the `WrongAnimal` object to be 
 * 								copied.
 * 
 * 
 * @brief Overloaded assignment operator for the `WrongAnimal` class.
 *
 * `WrongAnimal& WrongAnimal::operator=(const WrongAnimal &origin)`
 * 
 * This operator assigns the attributes of one `WrongAnimal` instance to 
 * another.
 * It ensures that the new object retains the values of the original.
 *
 * @param origin 				Reference to the `WrongAnimal` object being 
 * 								assigned.
 * @return						WrongAnimal& Reference to the assigned object.
 * 
 * 
 * @brief Destructor for the `WrongAnimal` class.
 *
 * `WrongAnimal::~WrongAnimal(void)`
 * 
 * This function is called when a `WrongAnimal` object goes out of scope.
 * It prints a message confirming the destruction of the object.
 * 
 * 
 * @brief Retrieves the type of the `WrongAnimal`.
 *
 * `std::string WrongAnimal::getType(void) const`
 * 
 * This function returns the `type` attribute of the `WrongAnimal` object.
 *
 * @return 						std::string The type of the `WrongAnimal`.
 * 
 * 
 * @brief Generates the sound of a `WrongAnimal`.
 *
 * `void WrongAnimal::makeSound() const`
 * 
 * This function prints a message representing the sound a `WrongAnimal` makes.
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
	std::cout << this->type << CYAN DFLT_CPY RESET << DFLT_WAN << std::endl;
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

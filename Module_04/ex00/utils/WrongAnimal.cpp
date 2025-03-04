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
 * 
 * 
 * 
 * 
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

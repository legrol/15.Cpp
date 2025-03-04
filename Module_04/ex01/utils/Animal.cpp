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
 * 
 * 
 * 
 * 
 */

Animal::Animal(void) : type("Animal")
{
	// this->type = "Animal";
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

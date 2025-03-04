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
 * 
 * 
 * 
 * 
 * 
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

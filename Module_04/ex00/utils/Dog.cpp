/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 01:13:48 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/02 01:18:58 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

/**
 * 
 * 
 * 
 * 
 * 
 */

Dog::Dog(void): Animal()
{
	this->type = "Dog";
	std::cout << CYAN DFLT_INI RESET << this->type << CYAN DFLT_POS RESET \
	<< DFLT_DOG << std::endl;
}
 
Dog::Dog(const Dog& copy): Animal(copy)
{
	this->type = copy.type;
	std::cout << CYAN DFLT_CPY RESET << this->type << CYAN DFLT_POS RESET \
	<< DFLT_DOG << std::endl;	
}

Dog &Dog::operator=(const Dog &origin)
{
	if (this != &origin)
		this->type = origin.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << CYAN DFLT_DST RESET << this->type << CYAN DFLT_POS RESET \
	<< DFLT_DOG << std::endl;
}

void Dog::makeSound() const
{
	std::cout << YELLOW DOG_SOUND RESET << std::endl;
}

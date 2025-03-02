/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 01:14:25 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/02 01:18:47 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

/**
 * 
 * 
 * 
 * 
 * 
 */

Cat::Cat(void): Animal() 
{
	this->type = "Cat";
	std::cout << CYAN DFLT_INI RESET << this->type << CYAN DFLT_POS RESET \
	<< DFLT_CAT << std::endl;
}

Cat::Cat(const Cat& copy): Animal(copy)
{
	this->type = copy.type;
	std::cout << CYAN DFLT_CPY RESET << this->type << CYAN DFLT_POS RESET \
	<< DFLT_CAT << std::endl;	 
}

Cat &Cat::operator=(const Cat &origin)
{
	if (this != &origin)
		this->type = origin.type;
	return (*this); 
}

Cat::~Cat(void)
{
	std::cout << CYAN DFLT_DST RESET << this->type << CYAN DFLT_POS RESET \
	<< DFLT_CAT << std::endl; 
}

void Cat::makeSound() const
{
	std::cout << YELLOW CAT_SOUND RESET << std::endl;
}

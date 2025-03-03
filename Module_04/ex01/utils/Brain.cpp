/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-03 14:26:08 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-03-03 14:26:08 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

/**
 * 
 * 
 * 
 * 
 * 
*/

Brain::Brain(void)
{
	this->type = "xxxxx";
	std::cout << MAGENTA DFLT_INI RESET << this->type << MAGENTA DFLT_POS \
	RESET << DFLT_DOG << std::endl;
}

Brain::Brain(const Brain& copy)
{




}

Brain &Brain::operator=(const Brain &origin)
{



}

Brain::~Brain(void)
{
	std::cout << MAGENTA DFLT_DST RESET << this->type << MAGENTA DFLT_POS \
	RESET << DFLT_DOG << std::endl;
}

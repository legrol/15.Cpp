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
	std::cout << MAGENTA DFLT_INI RESET << APP3_NAME << MAGENTA DFLT_POS \
	RESET << DFLT_BRN << std::endl;
}

Brain::Brain(const Brain& copy)
{
	*this = copy;
	std::cout << MAGENTA DFLT_CPY RESET << this->type << MAGENTA DFLT_POS \
	RESET << DFLT_DOG << std::endl;	



}

Brain const &Brain::operator=(const Brain &origin)
{



}

Brain::~Brain(void)
{
	std::cout << MAGENTA DFLT_DST RESET << APP3_NAME << MAGENTA DFLT_POS \
	RESET << DFLT_BRN << std::endl;
}

std::string const Brain::getIdeas(int const &index) const
{



}

void Brain::setIdeas(std::string const &idea, int const index)
{



}

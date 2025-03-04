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
	std::cout<< APP3_NAME << MAGENTA DFLT_CPY RESET << DFLT_DOG << std::endl;
}

Brain &Brain::operator=(const Brain &origin)
{
	std::copy(origin.ideas, origin.ideas + 100, this->ideas);
	std::cout << MAGENTA DFLT_OPE RESET << APP3_NAME << MAGENTA DFLT_POS \
	RESET << DFLT_BRN << std::endl;
	return (*this); 
}

Brain::~Brain(void)
{
	std::cout << MAGENTA DFLT_DST RESET << APP3_NAME << MAGENTA DFLT_POS \
	RESET << DFLT_BRN << std::endl;
}

std::string const Brain::getIdeas(int const &index) const
{
	if (index >= 0 && index < 100)
	return (this->ideas[index]);
	return (this->ideas[0]);
}

void Brain::setIdeas(std::string const &idea, int const index)
{
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
}

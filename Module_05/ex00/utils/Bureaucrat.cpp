/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-12 08:27:50 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-03-12 08:27:50 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

/**
 *  
 * 
 * 
 * 
 * 
 */

Bureaucrat::Bureaucrat(void): _name(NM_ANON), _grade(0)
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &origin)
{
	this->_name = origin._name;
	this->_grade = origin._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{


}

std::string const Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

unsigned int Bureaucrat::incrementGrade(void)
{


}

unsigned int Bureaucrat::decrementGrade(void)
{


}

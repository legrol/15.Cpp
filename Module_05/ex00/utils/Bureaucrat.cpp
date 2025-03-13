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
	std::cout << RED << this->getName() << RESET CYAN OB_CR_DFD RESET \
	<< std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade)
{
	std::cout << RED << this->getName() << RESET CYAN CR_PR RESET \
	<< std::endl;



}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	std::cout << RED << this->getName() << RESET CYAN OBJ_CP RESET \
	<< std::endl;
	*this = copy;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &origin)
{
	if (this != &origin)
        {
            const_cast<std::string&>(this->_name) = origin._name;  
			std::cout << RED << this->getName() << RESET CYAN OPR_ASG \
			RESET << std::endl;
            this->_grade = origin._grade;
        }
        return *this;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << RED << this->getName() << RESET CYAN OBJ_DT RESET \
	<< std::endl;
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

std::ostream	&operator<<(std::ostream &str, const Bureaucrat &bureacreat)
{


}

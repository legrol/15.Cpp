/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:42:45 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/20 14:45:21 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

/**
 * 
 * 
 * 
 * 
 * 
 * 
 */

RobotomyRequestForm::RobotomyRequestForm(void): \
AForm::AForm("ShrubberyCreationForm", 72, 45), _target("Anonymus")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target): \
AForm::AForm("ShrubberyCreationForm", 72, 45), _target(target)
{

}

RobotomyRequestForm:: RobotomyRequestForm(const RobotomyRequestForm &copy): \
AForm::AForm(copy), _target(copy._target)
{

}

RobotomyRequestForm & RobotomyRequestForm::operator=(const \
	RobotomyRequestForm &origin)
{
	AForm::operator=(origin);
	this->_target = origin._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}

void RobotomyRequestForm::beExecuted(const Bureaucrat &bureaucrat) const
{
	(void) bureaucrat;
	int fail;

	// srand((unsigned)time(NULL));
	fail = rand() % 2;
	if (fail)
		std::cout << RED << this->_target << RESET CYAN ROREYF RESET \
		<< std::endl;
	else
		std::cout << RED << this->_target << RESET CYAN RORENF RESET \
		<< std::endl;
}

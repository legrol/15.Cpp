/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:43:34 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/21 17:44:09 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

/**
 * 
 * 
 * 
 * 
 * 
 * 
 */
 
PresidentialPardonForm::PresidentialPardonForm(void): \
AForm::AForm("PresidentialPardonForm", 25, 5), _target("Anonymus")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target): \
AForm::AForm("PresidentialPardonForm", 25, 5), _target(target)
{

}

PresidentialPardonForm:: PresidentialPardonForm(const PresidentialPardonForm \
	&copy): AForm::AForm(copy), _target(copy._target)
{

}

PresidentialPardonForm & PresidentialPardonForm::operator=(const \
	PresidentialPardonForm &origin)
{
	AForm::operator=(origin);
	this->_target = origin._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

void PresidentialPardonForm::beExecuted(const Bureaucrat &Bureaucrat) const
{
	(void) Bureaucrat;
	std::cout << RED << this->_target << RESET CYAN PRPAFR RESET << std::endl;
}

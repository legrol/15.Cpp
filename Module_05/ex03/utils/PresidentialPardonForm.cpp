/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:43:34 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/23 19:48:20 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

/**
 * @brief PresidentialPardonForm::PresidentialPardonForm(void)
 * 
 * Default constructor. Initializes the form with default target "Anonymus".
 * Calls the base class AForm constructor with name "PresidentialPardonForm",
 * grade required to sign = 25 and to execute = 5.
 * 
 * 
 * @brief PresidentialPardonForm::PresidentialPardonForm(std::string target)
 * 
 * Parameterized constructor. Sets the form target to the given value.
 * 
 * @param target 				The target that will receive the presidential 
 * 								pardon.
 * 
 * 
 * @brief PresidentialPardonForm::PresidentialPardonForm(const 
 * PresidentialPardonForm &copy)
 * 
 * Copy constructor. Copies both base class data and the target from the given 
 * form.
 * 
 * @param copy 					The instance to copy from.
 * 
 * 
 * @brief PresidentialPardonForm & PresidentialPardonForm::operator=(const 
 * PresidentialPardonForm &origin)
 * 
 * Assignment operator. Performs a deep copy from the origin form.
 * 
 * @param origin 				The form instance to assign from.
 * @return 						A reference to the current object.
 * 
 * 
 * @brief PresidentialPardonForm::~PresidentialPardonForm(void)
 * 
 * Destructor. Currently does nothing, but provided for completeness.
 * 
 * 
 * @brief void PresidentialPardonForm::beExecuted(const Bureaucrat &Bureaucrat)
 * const
 * 
 * Executes the form's core action: prints a message stating the target has 
 * been pardoned.
 * 
 * @param Bureaucrat 				The bureaucrat who executes the form 
 * 									(unused in this method).
 * 
 * 
 * @brief AForm *PresidentialPardonForm::makeForm(AForm *sheet, const 
 * std::string &nameForm, const std::string &targetForm)
 *
 * Factory method that checks whether the given form name matches the 
 * identifier for `PresidentialPardonForm` (i.e., `PREPAR`).
 * If so, it creates and returns a new instance of `PresidentialPardonForm` 
 * initialized with the provided target.
 *
 * @param sheet        				A pointer to an `AForm`. Expected to be 
 * 									`NULL` if no previous form has been 
 * 									created.
 * @param nameForm     				The name of the requested form.
 * @param targetForm   				The target of the form's action (e.g., 
 * 									the person to pardon).
 *
 * @return AForm*      				A new `PresidentialPardonForm` if the 
 * 									name matches; otherwise, returns the 
 * 									original `sheet` pointer.
 * 
 * 
 * @brief const std::string &PresidentialPardonForm::getTarget() const
 *
 * Getter for the form's target.
 * Returns a constant reference to the `_target` member, which indicates 
 * the individual who will be pardoned.
 *
 * @return const std::string&   A reference to the `_target` string.
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

AForm *PresidentialPardonForm::makeForm(AForm *sheet, std::string const \
	&nameForm, std::string const &targetForm)
{
	if (sheet == NULL && nameForm == PREPAR)
	{
		return (new PresidentialPardonForm(targetForm));
	}
	return (sheet);
}

std::string const &PresidentialPardonForm::getTarget() const
{
	return(this->_target);
}

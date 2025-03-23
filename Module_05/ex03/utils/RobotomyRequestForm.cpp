/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:42:45 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/23 19:45:24 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

/**
 * @brief RobotomyRequestForm::RobotomyRequestForm(void)
 * 
 * Default constructor. Initializes the form with the default target 
 * "Anonymus".
 * Calls the AForm constructor with a fixed name, sign grade (72), and exec 
 * grade (45).
 * 
 * 
 * @brief RobotomyRequestForm::RobotomyRequestForm(std::string target)
 * 
 * Parameterized constructor. Initializes the form with a given target.
 * 
 * @param target 				The name of the target to attempt 
 * 								robotomization.
 * 
 * 
 * @brief RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm 
 * &copy)
 * 
 * Copy constructor. Uses the base class copy constructor and copies the 
 * target.
 * 
 * @param copy 					The instance to copy.
 * 
 * 
 * @brief RobotomyRequestForm & RobotomyRequestForm::operator=(const 
 * RobotomyRequestForm &origin)
 * 
 * Assignment operator overload. Copies base class values and updates the 
 * `_target`.
 * 
 * @param origin 				The form instance to copy from.
 * @return 						A reference to the current object.
 * 
 * 
 * @brief RobotomyRequestForm::~RobotomyRequestForm(void)
 * 
 * Destructor. Currently does nothing, but defined for future 
 * extensibility.
 * 
 * 
 * @brief void RobotomyRequestForm::beExecuted(const Bureaucrat &bureaucrat)
 * const
 * 
 * Simulates the robotomization process on the target. Has a 50% success 
 * rate.
 * The executor is not used directly, but passed for compliance with the 
 * interface.
 * 
 * @param bureaucrat 			The Bureaucrat executing the form (unused).
 * 
 * 
 * @brief AForm *RobotomyRequestForm::makeForm(AForm *sheet, const 
 * std::string &nameForm, const std::string &targetForm)
 *
 * Factory method that checks whether the form name matches the identifier 
 * for `RobotomyRequestForm` (i.e., `RBDM`).
 * If so, it returns a new dynamically allocated `RobotomyRequestForm` with 
 * the given target.
 *
 * @param sheet        			A pointer to an AForm. Expected to be `NULL` 
 * 								if no previous form has been created.
 * @param nameForm     			The name of the form requested by the caller.
 * @param targetForm   			The target upon which the form will operate 
 * 								(e.g., the person to robotomize).
 *
 * @return AForm*      			A pointer to a newly created 
 * 								`RobotomyRequestForm` if the form name matches;
 *								otherwise, returns the original `sheet` 
 								pointer.
 * 
 * 
 * @brief const std::string &RobotomyRequestForm::getTarget() const
 *
 * Getter method that returns a constant reference to the `_target` attribute 
 * of the form.
 * This target represents the individual who is the subject of the robotomy 
 * request.
 *
 * @return const std::string&   A reference to the `_target` string.
 * 
 */

RobotomyRequestForm::RobotomyRequestForm(void): \
AForm::AForm("RobotomyRequestForm", 72, 45), _target("Anonymus")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target): \
AForm::AForm("RobotomyRequestForm", 72, 45), _target(target)
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

	fail = rand() % 2;
	if (fail)
		std::cout << RED << this->_target << RESET CYAN ROREYF RESET \
		<< std::endl;
	else
		std::cout << RED << this->_target << RESET CYAN RORENF RESET \
		<< std::endl;
}

AForm *RobotomyRequestForm::makeForm(AForm *sheet, std::string const \
	&nameForm, std::string const &targetForm)
{
	if (sheet == NULL && nameForm == RBDM)
	{
		return (new RobotomyRequestForm(targetForm));
	}
	return (sheet);
}

std::string const &RobotomyRequestForm::getTarget() const
{
	return(this->_target);
}

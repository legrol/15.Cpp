/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-17 17:40:50 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-03-17 17:40:50 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"

/**
 * @brief Implements the `AForm` class, managing signing and grade constraints, 
 *        along with exception handling.
 * 
 * 
 * @brief AForm::AForm(void)
 * 
 * Default constructor.
 * Initializes a `AForm` object with default values for name, signing status, 
 * and grade requirements.
 * 
 * 
 * @brief AForm::AForm(std::string name, unsigned int const signgrade, unsigned 
 * int const execgrade)
 * 
 * Parameterized constructor.
 * Initializes a `AForm` object with a specified name and grade requirements.
 * Throws exceptions if the grade values are out of the valid range (1-150).
 * 
 * @param name 							The name of the aform.
 * @param signgrade 					The required grade to sign the aform.
 * @param execgrade 					The required grade to execute the aform.
 * 
 * @throws GradeTooHighException if any grade is less than 1.
 * @throws GradeTooLowException if any grade is greater than 150.
 * 
 * 
 * @brief AForm &AForm::operator=(const AForm &origin)
 * 
 * Assignment operator.
 * Assigns the signing status of one aform to another.
 *
 * @param origin 						The `AForm` object to copy values from.
 * @return 								A reference to the assigned object.
 * 
 * 
 * @brief AForm::~AForm(void)
 * 
 * Destructor.
 * Cleans up resources when the object is destroyed.
 * 
 * 
 * @brief std::string const AForm::getName(void) const
 * 
 * Retrieves the aform's name.
 *
 * @return 								The name of the aform.
 * 
 * 
 * @brief std::string const AForm::getSigned(void) const
 * 
 * Checks if the aform is signed.
 *
 * @return 								"YES" if signed, "NO" otherwise.
 * 
 * 
 * @brief int AForm::getGradeToSign(void) const
 * 
 * Retrieves the grade required to sign the aform.
 *
 * @return 								The signing grade.
 * 
 * 
 * @brief int AForm::getGradeToExec(void) const
 * 
 * Retrieves the grade required to execute the aform.
 *
 * @return 								The execution grade.
 * 
 * 
 * @brief void AForm::beSigned(Bureaucrat &Bureaucrat)
 * 
 * Allows a `Bureaucrat` to sign the aform if their grade is sufficient.
 *
 * @param Bureaucrat	 				The bureaucrat attempting to sign 
 * 										the aform.
 * 
 * @throws GradeTooHighException if the bureaucrat's grade is too low to sign.
 * 
 * 
 * @brief const char *AForm::GradeTooLowException::what() const throw()
 * 
 * Exception message for grades that are too low.
 *
 * @return 								A C-string explaining the low grade 
 * 										exception.
 * 
 * 
 * @brief const char *AForm::GradeTooHighException::what() const throw()
 * 
 * Exception message for grades that are too high.
 *
 * @return 								A C-string explaining the high grade 
 * 										exception.
 * 
 * 
 * @brief std::ostream &operator<<(std::ostream &str, const AForm &aform)
 * 
 * Overloaded output stream operator.
 * Formats the output for displaying form details.
 *
 * @param str 							The output stream.
 * @param aform 							The aform to be displayed.
 * @return 								The modified output stream.
 * 
 */

AForm::AForm(void): _name("default"), _signed(false), _gradeToSign(150), \
_gradeToExec(150)
{
	
}

AForm::AForm(std::string name, unsigned int const signgrade, unsigned int \
	const execgrade): _name(name), _signed(false), _gradeToSign(signgrade), \
	_gradeToExec(execgrade)
{
	if (_gradeToSign < 1)
		throw GradeTooHighException();
	else if (_gradeToSign > 150)
		throw GradeTooLowException();
	if (_gradeToExec < 1)
		throw GradeTooHighException();
	else if (_gradeToExec > 150)
		throw GradeTooLowException();
	std::cout << RED << this->getName() << RESET CYAN CR_PR_FR RESET \
		<< std::endl;
}

AForm & AForm::operator=(const AForm &origin)
{
	this->_signed = origin._signed;
	return (*this);
}

AForm::~AForm(void)
{
	
}

std::string const AForm::getName(void) const
{
	return (this->_name);
}

std::string const AForm::getSigned(void) const
{
	if (this->_signed == true)
		return ("YES");
	return ("NO");
}

int AForm::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int AForm::getGradeToExec(void) const
{
	return (this->_gradeToExec);
}

void AForm::beSigned(Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() <= this->_gradeToSign)
	{
		this->_signed = 1;
	}
	else
		throw GradeTooHighException();
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return (WHITE LOWEXC RESET);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return (WHITE HIGHEXC RESET);
}

std::ostream	&operator<<(std::ostream &str, const AForm &aform)
{
	str << GREEN << aform.getName() << RESET BLUE FOSIGN RESET << \
	aform.getSigned() << BLUE FOGRD RESET << aform.getGradeToSign() \
	<< BLUE FOEXEC RESET << aform.getGradeToExec();
	return (str);
}

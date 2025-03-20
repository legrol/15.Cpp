/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 22:24:22 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/20 12:00:54 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

/**
 * @brief Implements the `Form` class, managing signing and grade constraints, 
 *        along with exception handling.
 * 
 * 
 * @brief Form::Form(void)
 * 
 * Default constructor.
 * Initializes a `Form` object with default values for name, signing status, 
 * and grade requirements.
 * 
 * 
 * @brief Form::Form(std::string name, unsigned int const signgrade, unsigned 
 * int const execgrade)
 * 
 * Parameterized constructor.
 * Initializes a `Form` object with a specified name and grade requirements.
 * Throws exceptions if the grade values are out of the valid range (1-150).
 * 
 * @param name 							The name of the form.
 * @param signgrade 					The required grade to sign the form.
 * @param execgrade 					The required grade to execute the form.
 * 
 * @throws GradeTooHighException if any grade is less than 1.
 * @throws GradeTooLowException if any grade is greater than 150.
 * 
 * 
 * @brief Form::Form(const Form &copy)
 * 
 * Copy constructor for the `Form` class. It creates a new `Form` object as a 
 * copy of an existing one, preserving its attributes.
 * 
 * @param copy A reference to the `Form` object being copied.
 * 
 * The copy constructor ensures that the new instance has the same name, 
 * signing status, signing grade requirement, and execution grade requirement 
 * as the original.
 * 
 * 
 * @brief Form &Form::operator=(const Form &origin)
 * 
 * Assignment operator.
 * Assigns the signing status of one form to another.
 *
 * @param origin 						The `Form` object to copy values from.
 * @return 								A reference to the assigned object.
 * 
 * 
 * @brief Form::~Form(void)
 * 
 * Destructor.
 * Cleans up resources when the object is destroyed.
 * 
 * 
 * @brief std::string const Form::getName(void) const
 * 
 * Retrieves the form's name.
 *
 * @return 								The name of the form.
 * 
 * 
 * @brief std::string const Form::getSigned(void) const
 * 
 * Checks if the form is signed.
 *
 * @return 								"YES" if signed, "NO" otherwise.
 * 
 * 
 * @brief int Form::getGradeToSign(void) const
 * 
 * Retrieves the grade required to sign the form.
 *
 * @return 								The signing grade.
 * 
 * 
 * @brief int Form::getGradeToExec(void) const
 * 
 * Retrieves the grade required to execute the form.
 *
 * @return 								The execution grade.
 * 
 * 
 * @brief void Form::beSigned(Bureaucrat &Bureaucrat)
 * 
 * Allows a `Bureaucrat` to sign the form if their grade is sufficient.
 *
 * @param Bureaucrat	 				The bureaucrat attempting to sign 
 * 										the form.
 * 
 * @throws GradeTooHighException if the bureaucrat's grade is too low to sign.
 * 
 * 
 * @brief const char *Form::GradeTooLowException::what() const throw()
 * 
 * Exception message for grades that are too low.
 *
 * @return 								A C-string explaining the low grade 
 * 										exception.
 * 
 * 
 * @brief const char *Form::GradeTooHighException::what() const throw()
 * 
 * Exception message for grades that are too high.
 *
 * @return 								A C-string explaining the high grade 
 * 										exception.
 * 
 * 
 * @brief std::ostream &operator<<(std::ostream &str, const Form &form)
 * 
 * Overloaded output stream operator.
 * Formats the output for displaying form details.
 *
 * @param str 							The output stream.
 * @param form 							The form to be displayed.
 * @return 								The modified output stream.
 * 
 */

Form::Form(void): _name("default"), _signed(false), _gradeToSign(150), \
_gradeToExec(150)
{
	
}

Form::Form(std::string name, unsigned int const signgrade, unsigned int \
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

Form::Form(const Form &copy): _name(copy._name), _signed(copy._signed), \
_gradeToSign(copy._gradeToSign), _gradeToExec(copy._gradeToExec)
{
	std::cout << RED << this->getName() << RESET CYAN OBJ_CP RESET 
	<< std::endl;
}

Form & Form::operator=(const Form &origin)
{
	this->_signed = origin._signed;
	return (*this);
}

Form::~Form(void)
{
	
}

std::string const Form::getName(void) const
{
	return (this->_name);
}

std::string const Form::getSigned(void) const
{
	if (this->_signed == true)
		return ("YES");
	return ("NO");
}

int Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExec(void) const
{
	return (this->_gradeToExec);
}

void Form::beSigned(Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() <= this->_gradeToSign)
	{
		this->_signed = 1;
	}
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooLowException::what() const throw()
{
	return (WHITE LOWEXC RESET);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return (WHITE HIGHEXC RESET);
}

std::ostream	&operator<<(std::ostream &str, const Form &form)
{
	str << GREEN << form.getName() << RESET BLUE FOSIGN RESET << \
	form.getSigned() << BLUE FOGRD RESET << form.getGradeToSign() \
	<< BLUE FOEXEC RESET << form.getGradeToExec();
	return (str);
}

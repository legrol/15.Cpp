/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 08:27:50 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/16 20:16:11 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

/**
 *  @brief Implements the `Bureaucrat` class, handling grade constraints, 
 *        construction, and exception mechanisms.
 * 
 * 
 * @brief Bureaucrat::Bureaucrat(void)
 * 
 * Default constructor.
 * Initializes a `Bureaucrat` object with a default name and grade of 150.
 * 
 * 
 * @brief Bureaucrat::Bureaucrat(std::string name, int grade)
 * 
 * Parameterized constructor.
 * Initializes a `Bureaucrat` object with a specified name and grade.
 * Throws exceptions if the grade is out of valid bounds.
 *
 * @param name 						The name of the bureaucrat.
 * @param grade 					The grade of the bureaucrat.
 * @throws Bureaucrat::GradeTooHighException if grade is less than GRD_MAX.
 * @throws Bureaucrat::GradeTooLowException if grade is greater than GRD_MIN.
 * 
 * 
 * @brief Bureaucrat::Bureaucrat(const Bureaucrat &copy)
 * 
 * Copy constructor.
 * Creates a new `Bureaucrat` object by copying an existing one.
 *
 * @param copy 						Reference to the `Bureaucrat` object to 
 * 									be copied.
 * 
 * 
 * @brief Bureaucrat &Bureaucrat::operator=(const Bureaucrat &origin)
 * 
 * Assignment operator.
 * Assigns the values of one `Bureaucrat` object to another.
 *
 * @param origin 					The `Bureaucrat` object to copy values 
 * 									from.
 * @return 							A reference to the assigned object.
 * 
 * 
 * @brief Bureaucrat::~Bureaucrat(void)
 * 
 * Destructor.
 * Cleans up resources and prints a message upon destruction.
 * 
 * 
 * @brief std::string const Bureaucrat::getName(void) const
 * 
 * Retrieves the bureaucrat's name.
 *
 * @return 							The name of the bureaucrat.
 * 
 * 
 * @brief unsigned int Bureaucrat::getGrade(void) const
 * 
 * Retrieves the bureaucrat's grade.
 *
 * @return 							The grade of the bureaucrat.
 * 
 * 
 * @brief unsigned int Bureaucrat::incrementGrade(void)
 * 
 * Increments the bureaucrat's grade.
 * Throws an exception if the grade becomes too high.
 *
 * @throws Bureaucrat::GradeTooHighException if grade exceeds upper limit.
 * @return 							The updated grade.
 * 
 * 
 * @brief unsigned int Bureaucrat::decrementGrade(void)
 * 
 * Decrements the bureaucrat's grade.
 * Throws an exception if the grade becomes too low.
 *
 * @throws Bureaucrat::GradeTooLowException if grade falls below lower limit.
 * @return 							The updated grade.
 * 
 * 
 * @brief const char *Bureaucrat::GradeTooLowException::what() const throw()
 * 
 * Exception message for grades that are too low.
 *
 * @return 							A C-string explaining the low grade 
 * 									exception.
 * 
 * 
 * @brief const char *Bureaucrat::GradeTooHighException::what() const throw()
 * 
 * Exception message for grades that are too high.
 *
 * @return 							A C-string explaining the high grade 
 * 									exception.
 * 
 * 
 * @brief std::ostream &operator<<(std::ostream &str, const Bureaucrat 
 * &bureaucrat)
 * 
 * Overloaded output stream operator.
 * Formats the output for displaying bureaucrat details.
 *
 * @param str 						The output stream.
 * @param bureaucrat 				The bureaucrat to be displayed.
 * @return 							The modified output stream. 
 * 
 * 
 * @brief void Bureaucrat::signForm(Form &form)
 * 
 * Attempts to sign a given `Form` object. 
 * If the bureaucrat's grade meets the form's signing requirements, the form
 * is signed successfully. 
 * Otherwise, it catches the exception and displays an error message explaining
 * why the signing failed.
 * 
 * @param form 						The `Form` object that the bureaucrat
 * 									attempts to sign.
 * 
 */

Bureaucrat::Bureaucrat(void): _name(NM_ANON), _grade(150)
{
	std::cout << RED << this->getName() << RESET CYAN OB_CR_DFD RESET \
	<< std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade): _name(name)
{
	this->_grade = grade;
	if (_grade < GRD_MAX)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > GRD_MIN)
		throw Bureaucrat::GradeTooLowException();	

	std::cout << RED << this->getName() << RESET CYAN CR_PR_BU RESET \
	<< std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy._name), 
_grade(copy._grade)
{
	std::cout << RED << this->getName() << RESET CYAN OBJ_CP RESET 
	<< std::endl;
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
	if (_grade - 1 < GRD_MAX)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
	return this->_grade;
}

unsigned int Bureaucrat::decrementGrade(void)
{
	if (_grade + 1 > GRD_MIN)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
	return this->_grade;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return (WHITE LOWEXC RESET);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return (WHITE HIGHEXC RESET);
}

std::ostream	&operator<<(std::ostream &str, const Bureaucrat &bureaucreat)
{
	str << GREEN << bureaucreat.getName() << RESET BLUE GRADE RESET GREEN << \
	bureaucreat.getGrade() << RESET << std::endl;
	return (str);
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << YELLOW << this->_name << RESET CYAN SIGN RESET \
		<< MAGENTA << form.getName() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << YELLOW << this->_name << RESET CYAN NOSIGN RESET << \
		MAGENTA << form.getName() << RESET CYAN RASON RESET << e.what() \
		<< std::endl;
	}
}

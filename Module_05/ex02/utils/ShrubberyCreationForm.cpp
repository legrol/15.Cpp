/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:41:56 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/23 13:03:20 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Bureaucrat.hpp"

/**
 * @brief ShrubberyCreationForm::ShrubberyCreationForm(void)
 * 
 * Default constructor. Initializes the form with a default target "Anonymus"
 * and sets the name, grade to sign (145), and grade to execute (137)
 * by calling the AForm constructor.
 * 
 * 
 * @brief ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
 * 
 * Parameterized constructor. Initializes the form with a given target name.
 * Calls the AForm constructor with specific grade requirements.
 * 
 * @param target 					The name of the target used to create the 
 * 									output file.
 * 
 * 
 * @brief ShrubberyCreationForm::ShrubberyCreationForm(const 
 * ShrubberyCreationForm &copy)
 * 
 * Copy constructor. Copies the internal target and calls the base class copy 
 * constructor.
 * 
 * @param copy 						The ShrubberyCreationForm to be copied.
 * 
 * 
 * @brief ShrubberyCreationForm & ShrubberyCreationForm::operator=(const 
 * ShrubberyCreationForm &origin)
 * 
 * Assignment operator overload. Copies base class properties and the target 
 * value.
 * ç
 * @param origin 					The form to copy from.
 * @return 							A reference to the updated 
 * 									ShrubberyCreationForm object.
 * 
 * 
 * @brief ShrubberyCreationForm::~ShrubberyCreationForm(void)
 * 
 * Destructor. Currently does nothing but defined for completeness and 
 * future extensibility.
 * 
 * 
 * @brief void ShrubberyCreationForm::beExecuted(const Bureaucrat &bureaucrat)
 * const
 * 
 * Executes the form by creating a file named `<target>_shrubbery` and writing
 * ASCII trees into it.
 * 
 * @param bureaucrat 				The `Bureaucrat` executing the form.
 * 
 * If the file cannot be opened, an error message is printed to `std::cerr`.
 * 
 */

ShrubberyCreationForm::ShrubberyCreationForm(void): \
AForm::AForm("ShrubberyCreationForm", 145, 137), _target("Anonymus")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): \
AForm::AForm("ShrubberyCreationForm", 145, 137), _target(target)
{

}

ShrubberyCreationForm:: ShrubberyCreationForm(const ShrubberyCreationForm \
	&copy): AForm::AForm(copy), _target(copy._target)
{

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const \
	ShrubberyCreationForm &origin)
{
	AForm::operator=(origin);
	this->_target = origin._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

void ShrubberyCreationForm::beExecuted(const Bureaucrat &bureaucrat) const
{
	std::ofstream outfile;

	outfile.open((this->_target + EXT).c_str());
	if (!outfile) {
		std::cerr << CYAN NOOPENF RESET << std::endl;
		return ;
	}
	outfile << OTFL4;
	outfile.close();

	std::cout << bureaucrat.getName() << CYAN SHRU RESET << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:41:56 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/21 16:06:54 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Bureaucrat.hpp"

/**
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 13:57:07 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/23 19:51:14 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

/**
 * @brief Intern::Intern(void)
 *
 * Default constructor for the `Intern` class.
 * Does not perform any special initialization.
 * 
 * 
 * @brief Intern::Intern(const Intern &copy)
 *
 * Copy constructor for the `Intern` class.
 * Delegates copy to the assignment operator.
 *
 * @param copy 						The `Intern` object to copy from.
 * 
 * 
 * @brief Intern &Intern::operator=(const Intern &origin)
 *
 * Assignment operator for the `Intern` class.
 * Since `Intern` holds no internal state, nothing is copied.
 *
 * @param origin 					The `Intern` object to assign from.
 * @return 							A reference to the current instance.
 * 
 * 
 * @brief Intern::~Intern(void)
 *
 * Destructor for the `Intern` class.
 * No dynamic memory needs to be freed.
 * 
 * 
 * @brief AForm* Intern::makeForm(const std::string &nameForm, const 
 * std::string &targetForm)
 *
 * Creates a new form based on the given name and target.
 * Delegates the creation to the static factory method `AForm::makeForm`.
 * If the form name is not recognized, throws `formDoesNotExist` exception.
 *
 * @param nameForm 					The name of the form to create.
 * @param targetForm 				The target the form will operate on.
 * @return 							A pointer to the newly created `AForm` 
 * 									instance.
 * @throws Intern::formDoesNotExist if the form name is invalid.
 * 
 * 
 * @brief const char *Intern::formDoesNotExist::what() const throw()
 *
 * Custom exception class method for invalid form creation.
 * Returns an error message indicating that the form name is unrecognized.
 *
 * @return const char* 				A C-style string describing the error.
 * 
 */

Intern::Intern(void)
{
 
}
 
Intern:: Intern(const Intern &copy)
{
	*this = copy;
}
 
Intern const & Intern::operator=(const Intern &origin)
{
	(void) origin;
	return (*this);
}
 
Intern::~Intern(void)
{

}

AForm* Intern::makeForm(const std::string &nameForm, const std::string \
	&targetForm)
{
	AForm *sheet;
	
	sheet = AForm::makeForm(nameForm, targetForm);
	if (!sheet)
		throw formDoesNotExist();
	std::cout << CYAN INTCOUT RESET GREEN << nameForm << RESET CYAN WTG \
	RESET << sheet->getTarget() << std::endl;
	return (sheet);
}

const char *Intern::formDoesNotExist::what() const throw()
{
	return (WHITE INTERR RESET);
}

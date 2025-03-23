/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:40:36 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/23 21:11:33 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

// ============================================================================
// Libraries
// ============================================================================
# include <iostream>			// std::cout, std::endl, ...
# include <string>				// std::string
# include <cstdlib>				// use to EXIT_FAILURE, EXIT_SUCCESS...
# include <stdexcept>			// std::exception

// ============================================================================
// Access to my libraries
// ============================================================================
#include "macros.hpp"
#include "colors.hpp"

class Bureaucrat;

class AForm
{
	private:

		std::string const _name;
		bool _signed;
		unsigned int const _gradeToSign;
		unsigned int const _gradeToExec;

	public:

		AForm(void);		
		AForm(std::string name, unsigned int const signgrade, unsigned int \
			const execgrade);
		AForm(const AForm &copy);
		AForm & operator=(const AForm &origin);
		virtual ~AForm(void);

		std::string const getName(void) const;
		std::string const getSigned(void) const;
		int getGradeToSign(void) const;
		int getGradeToExec(void) const;

		void beSigned(Bureaucrat &Bureaucrat);
		virtual void beExecuted(Bureaucrat const &executor) const = 0;
		void execute(Bureaucrat const &executor) const;

		static AForm *makeForm(std::string const &nameForm, std::string const &targetForm);
		virtual std::string const	&getTarget() const = 0;

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class FormWithoutSign: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

// ============================================================================
// Functions
// ============================================================================
std::ostream	&operator<<(std::ostream &str, const AForm &form);

#endif
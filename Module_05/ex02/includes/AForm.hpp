/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-17 17:40:36 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-03-17 17:40:36 by rdel-olm         ###   ########.fr       */
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
		AForm(const AForm &copy);
		AForm(std::string name, unsigned int const signgrade, unsigned int \
			const execgrade);
			AForm & operator=(const AForm &origin);
		~AForm(void);

		std::string const getName(void) const;
		std::string const getSigned(void) const;
		int getGradeToSign(void) const;
		int getGradeToExec(void) const;
		void beSigned(Bureaucrat &Bureaucrat);

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

};

// ============================================================================
// Functions
// ============================================================================
std::ostream	&operator<<(std::ostream &str, const AForm &aform);

#endif
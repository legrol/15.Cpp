/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 08:24:28 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/21 13:40:37 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

// ============================================================================
// Libraries
// ============================================================================
# include <iostream>			// std::cout, std::cerr, std::endl, ...
# include <string>				// std::string
# include <cstdlib>				// use to EXIT_FAILURE, EXIT_SUCCESS ...
# include <stdexcept>			// std::exception
# include <ctime>				// time(), localtime(), difftime() ...
# include <fstream>				// std::ofstream, std::fstream, ...

// ============================================================================
// Access to my libraries
// ============================================================================
#include "macros.hpp"
#include "colors.hpp"

class AForm;

class Bureaucrat
{
	private:

		std::string const	_name;
		unsigned int		_grade;

	public:

		Bureaucrat(void);
		Bureaucrat(std::string _name, unsigned int _grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat & operator=(const Bureaucrat &origin);
		~Bureaucrat(void);

		std::string const getName(void) const;
		unsigned int getGrade(void) const;
		unsigned int incrementGrade(void);
		unsigned int decrementGrade(void);

		void signForm(AForm &aform);

		void executeForm(AForm const &aform);

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
void			print_banner();
std::ostream	&operator<<(std::ostream &str, const Bureaucrat &bureaucreat);

#endif
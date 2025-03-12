/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-12 08:24:28 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-03-12 08:24:28 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT.HPP
# define BUREAUCRAT.HPP

// ============================================================================
// Libraries
// ============================================================================
# include <iostream>			// std::cout, std::endl, ...
# include <string>				// std::string
# include <cstdlib>				// use to EXIT_FAILURE, EXIT_SUCCESS...

// ============================================================================
// Access to my libraries
// ============================================================================
#include "macros.hpp"
#include "colors.hpp"

class Bureaucrat
{
	private:

		std::string const	_name;
		unsigned int		_grade;

	public:

		Bureaucrat(void);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat & operator=(const Bureaucrat &origin);
		~Bureaucrat(void);

		std::string const getName(void) const;
		unsigned int getGrade(void) const;
		unsigned int incrementGrade(void);
		unsigned int decrementGrade(void);
};

// ============================================================================
// Functions
// ============================================================================
void			print_banner();
std::ostream	&operator<<(std::ostream &str, const Bureaucrat &bureacreat);

#endif
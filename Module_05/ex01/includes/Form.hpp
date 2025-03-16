/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 22:23:29 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/15 23:40:08 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

// # include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	private:

		std::string const _name;
		bool _signed;
		unsigned int const _gradeToSign;
		unsigned int const _gradeToExec;

	public:

		Form(void);
		Form(const Form &copy);
		Form(std::string name, unsigned int const signgrade, unsigned int \
			const execgrade);
		Form & operator=(const Form &origin);
		~Form(void);

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
std::ostream	&operator<<(std::ostream &str, const Form &form);

#endif
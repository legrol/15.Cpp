/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 13:57:53 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/23 19:49:01 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
# define INTER_HPP

#include "AForm.hpp"

class Intern
{
	private:



	public:

		Intern(void);		
		Intern(const Intern &copy);
		Intern const & operator=(const Intern &origin);
		~Intern(void);
		
		AForm* makeForm(const std::string &nameForm, const std::string \
			&targetForm);

		class formDoesNotExist: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
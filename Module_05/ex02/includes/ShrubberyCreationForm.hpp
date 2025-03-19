/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-17 17:41:45 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-03-17 17:41:45 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp" 

class ShrubberyCreationForm: public AForm
{
	private:

		std::string _target;

	public:

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm(std::string name, unsigned int const signgrade, \
			unsigned int const execgrade);
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &origin);
		~ShrubberyCreationForm(void);



};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:41:45 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/23 18:07:52 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp" 

class ShrubberyCreationForm: public AForm
{
	private:

		std::string _target;

	public:

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);		
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &origin);
		~ShrubberyCreationForm(void);

		void beExecuted(const Bureaucrat &Bureaucrat) const;

		static AForm *makeForm(AForm *sheet, std::string const &nameForm, \
			std::string const &targetForm);
		std::string const &getTarget() const;
};

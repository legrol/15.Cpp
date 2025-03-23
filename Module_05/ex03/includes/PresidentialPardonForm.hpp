/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:44:43 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/23 18:07:56 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp" 

class PresidentialPardonForm: public AForm
{
	private:

		std::string _target;

	public:

		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);		
		PresidentialPardonForm & operator=(const PresidentialPardonForm \
			&origin);
		~PresidentialPardonForm(void);

		void beExecuted(const Bureaucrat &Bureaucrat) const;
		
		static AForm *makeForm(AForm *sheet, std::string const &nameForm, \
			std::string const &targetForm);
		std::string const &getTarget() const;
};

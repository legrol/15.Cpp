/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:42:58 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/20 14:28:49 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp" 

class RobotomyRequestForm: public AForm
{
	private:

		std::string _target;

	public:

		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);		
		RobotomyRequestForm & operator=(const RobotomyRequestForm &origin);
		~RobotomyRequestForm(void);

		void beExecuted(const Bureaucrat &bureaucrat) const;
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-17 17:42:58 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-03-17 17:42:58 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp" 

class RobotomyRequestForm: public AForm
{
	private:

		std::string _target;

	public:

		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm(std::string name, unsigned int const signgrade, \
			unsigned int const execgrade);
		RobotomyRequestForm & operator=(const RobotomyRequestForm &origin);
		~RobotomyRequestForm(void);


};

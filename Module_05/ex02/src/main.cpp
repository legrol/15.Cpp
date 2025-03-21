/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:52:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/21 21:34:19 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

/**
 * 
 * 
 * 
 * 
 * 
 */

int main()
{
	print_banner();

	srand((unsigned)time(NULL));
	
	std::cout << std::endl << YELLOW TEST1 RESET << std::endl << std::endl;

	ShrubberyCreationForm shrubbery("Garden");
	RobotomyRequestForm robotomy("Marvin");
	PresidentialPardonForm pardon("Tony Stark");

	std::cout << std::endl;

	Bureaucrat agentEcho("Agent Echo", 150);
	Bureaucrat operativeV("Operative V", 120);
	Bureaucrat chiefOmega("Chief Omega", 3);

	std::cout << std::endl << YELLOW SPACES RESET << std::endl;

	std::cout << std::endl << YELLOW TEST2 RESET << std::endl << std::endl;
	{
		try
		{
			std::cout << agentEcho << std::endl;

			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl << std::endl;

			agentEcho.executeForm(shrubbery);
			agentEcho.executeForm(robotomy);
			agentEcho.executeForm(pardon);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << YELLOW SPACES RESET << std::endl;
	
	std::cout << std::endl << YELLOW TEST3 RESET << std::endl << std::endl;
	{
		try
		{
			std::cout << agentEcho;
			std::cout << operativeV << std::endl;
			
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl << std::endl;
			
			shrubbery.beSigned(operativeV);
			agentEcho.executeForm(shrubbery);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << YELLOW SPACES RESET << std::endl;
		
	std::cout << std::endl << YELLOW TEST4 RESET << std::endl << std::endl;
	{
		try
		{
			shrubbery.beSigned(chiefOmega);
			robotomy.beSigned(chiefOmega);
			pardon.beSigned(chiefOmega);

			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;
			
			std::cout << std::endl << RED STEST41 RESET << std::endl << \
			std::endl;
			chiefOmega.executeForm(shrubbery);

			std::ifstream infile(GARD);
			if (!infile)
				std::cerr << YELLOW NOFILE RESET BLUE GARD RESET << std::endl;
			else
			{
				std::cout << std::endl << YELLOW SLOG RESET RED GARD RESET \
				YELLOW POINTS RESET << std::endl << std::endl;
				std::string line;
				while (std::getline(infile, line))
					std::cout << WHITE << line << RESET << std::endl;
				infile.close();
			}

			std::cout << std::endl << RED STEST42 RESET << std::endl << \
			std::endl;
			chiefOmega.executeForm(robotomy);
			
			std::cout << std::endl << RED STEST43 RESET << std::endl << \
			std::endl;
			chiefOmega.executeForm(pardon);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	
	// std::cout << std::endl << YELLOW SPACES RESET << std::endl << std::endl;

	// 	/* Sign forms and execute them */
	// {
	// 	try
	// 	{
	// 		shrubbery.beSigned(chiefOmega);   // 🔥 ¡ESTA ES LA LÍNEA CLAVE!
	// 		robotomy.beSigned(chiefOmega);
	// 		pardon.beSigned(chiefOmega);

	// 		std::cout << shrubbery << std::endl;
	// 		std::cout << robotomy << std::endl;
	// 		std::cout << pardon << std::endl;
			
	// 		std::cout << "\n --------------------- \n\n";
	// 		chiefOmega.executeForm(shrubbery);
	// 		std::cout << "\n --------------------- \n\n";
	// 		chiefOmega.executeForm(robotomy);
	// 		std::cout << "\n --------------------- \n\n";
	// 		chiefOmega.executeForm(pardon);
	// 	}
	// 	catch (std::exception &e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}
	// 	chiefOmega.executeForm(shrubbery);

	// }

	std::cout << std::endl << YELLOW SPACES RESET << std::endl << std::endl;

	return (EXIT_SUCCESS);
}

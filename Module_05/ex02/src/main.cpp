/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:52:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/23 13:16:56 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

/**
 * @brief int main()
 * 
 * Entry point of the program. Demonstrates the behavior of various concrete 
 * AForm subclasses (`ShrubberyCreationForm`, `RobotomyRequestForm`, 
 * `PresidentialPardonForm`) and how they interact with `Bureaucrat` objects.
 * 
 * It includes multiple test cases:
 * - TEST1: Instantiates forms and bureaucrats.
 * - TEST2: Attempts execution of forms by a bureaucrat without enough grade.
 * - TEST3: A form is signed, and a bureaucrat with insufficient grade attempts 
 * 			execution.
 * - TEST4: All forms are signed and executed by a highly ranked bureaucrat.
 * 
 *   Also validates that a file was created for the `ShrubberyCreationForm`.
 * 
 * @return int 					Returns EXIT_SUCCESS upon successful execution.
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

			std::cout << std::endl << shrubbery << std::endl;
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

	std::cout << std::endl << YELLOW SPACES RESET << std::endl << std::endl;

	return (EXIT_SUCCESS);
}

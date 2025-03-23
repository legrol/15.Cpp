/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:52:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/23 19:38:50 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/Intern.hpp"

/**
 * @brief int main(void)
 * 
 * This function serves as the entry point for testing the `Intern` class, 
 * which is capable of dynamically creating various `AForm`-derived forms based
 * on string inputs.
 * 
 * The program initializes a banner and random seed, then proceeds to two main 
 * test cases:
 * 
 * TEST5:
 * - Attempts to generate different forms via `Intern::makeForm()` including:
 *   - RobotomyRequestForm
 *   - ShrubberyCreationForm
 *   - PresidentialPardonForm
 *   - An invalid form (to trigger exception handling)
 * - Each form is created and deleted immediately after for cleanup.
 * 
 * TEST6:
 * - Creates forms using the intern and executes them using a `Bureaucrat`.
 * - Verifies correct behavior of signing and executing:
 *   - A ShrubberyCreationForm signed and executed manually.
 *   - A PresidentialPardonForm signed via `signForm()` and then executed.
 * 
 * The function demonstrates proper memory management, exception handling,
 * and interaction between Intern, Bureaucrat, and AForm.
 * 
 * @return int 					Returns EXIT_SUCCESS upon successful program 
 * 								termination.
 * 
 */

int main()
{
	print_banner();

	srand((unsigned)time(NULL));
	
	Intern		student42;
	AForm		*form;

	std::cout << std::endl << YELLOW SPACES RESET << std::endl;
	std::cout << std::endl << YELLOW TEST5 RESET << std::endl << std::endl;

	Bureaucrat	staff("Joachim", 50);
	std::cout << std::endl;

	try
	{
		form = student42.makeForm(RBDM, "42A");
		delete form;
		std::cout << std::endl;

		form = student42.makeForm(SHDSG, "42B");
		delete form;
		std::cout << std::endl;

		form = student42.makeForm(PREPAR, "42C");
		delete form;
		std::cout << std::endl;

		form = student42.makeForm(RNRQ, "42D");
		delete form;
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << BLUE CAEXC RESET << e.what() << std::endl;
	}

	std::cout << std::endl << YELLOW SPACES RESET << std::endl;
	std::cout << std::endl << YELLOW TEST6 RESET << std::endl << std::endl;
	
	std::cout << WHITE STEST41 RESET << std::endl << std::endl;
	form = student42.makeForm(SHDSG, "42E");
	form->beSigned(staff);
	staff.executeForm(*form);
	delete form;
	std::cout << std::endl;

	std::cout << WHITE STEST43 RESET << std::endl << std::endl;
	form = student42.makeForm(PREPAR, "42F");
	staff.signForm(*form);
	staff.executeForm(*form);
	delete form;
	std::cout << std::endl;

	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:52:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/16 20:17:31 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

/**
 * Main function that tests the `Form` and `Bureaucrat` classes by performing 
 * various operations, such as creating forms with valid and invalid grades, 
 * signing forms, and handling exceptions for invalid operations.
 * 
 * The tests are divided into multiple sections:
 * 1. **TESTFORM1**: Attempts to create a form with an invalid signing grade.
 * 2. **TESTFORM4**: Attempts to create a form with an invalid execution grade.
 * 3. **TESTFORM2**: A valid bureaucrat tries to sign a form that requires a 
 * 					 higher grade.
 * 4. **TESTFORM3**: A bureaucrat tries to sign a form but doesn't meet the 
 * 					 required grade.
 * 
 * Each section is wrapped in a `try-catch` block to handle and display 
 * exceptions gracefully.
 * 
 * @return int Returns `EXIT_SUCCESS` upon successful execution.
 * 
 */

int main()
{
	print_banner();

	{
		std::cout << std::endl << YELLOW SPACES RESET  << std::endl \
		<< std::endl;

		std::cout << GREEN TESTFORM1 RESET << std::endl << std::endl;
		{
			try
			{
				Form form42("TopSecret42", 0, 5);
				std::cout << form42 << std::endl;
			}
			catch(std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}			
		}

		std::cout << std::endl << GREEN TESTFORM4 RESET << std::endl \
		<< std::endl;
		{
			try
			{
				Form form42("TopSecret42", 2, 152);
				std::cout << form42 << std::endl;
			}
			catch(std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}			
		}
	
		std::cout << std::endl << YELLOW SPACES RESET  << std::endl \
		<< std::endl;
	
		std::cout << GREEN TESTFORM2 RESET << std::endl << std::endl;
		{
			try
			{
				Bureaucrat officer0("Alumni42", 15);
				std::cout << officer0 << std::endl;

				Form form42("TIG42", 20, 45);				
				std::cout << form42 << std::endl;

				officer0.signForm(form42);
				std::cout << form42 << std::endl << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}
		
		std::cout << std::endl << YELLOW SPACES RESET  << std::endl \
		<< std::endl;
	
		std::cout << GREEN TESTFORM3 RESET << std::endl << std::endl;
		{
			try
			{
				Bureaucrat officer1("Core42", 35);
				std::cout << officer1 << std::endl;

				Form form42("Norminette42", 20, 45);				
				std::cout << form42 << std::endl;
				officer1.signForm(form42);
				std::cout << form42 << std::endl << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}

		std::cout << std::endl;
	}
	return (EXIT_SUCCESS);
}

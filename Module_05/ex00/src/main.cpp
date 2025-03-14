/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:52:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/14 22:11:17 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

/**
 * @brief Demonstrates the functionality of the `Bureaucrat` class.
 *
 * This file tests the creation, grade validation, and grade 
 * increment/decrement functionalities for instances of the `Bureaucrat` class.
 * 
 * 
 * @section Construction and Copy Testing
 * 
 * Tests the default, parameterized, copy, and assignment constructors 
 * of the `Bureaucrat` class.
 * 
 */

int main()
{
	print_banner();

	{	
		std::cout << YELLOW CONST RESET << std::endl << std::endl;
		
		Bureaucrat	officer1("Konrad", 42);
		std::cout << std::endl;
		Bureaucrat	officer2;
		std::cout << std::endl;
		Bureaucrat	officer3(officer1);
		std::cout << std::endl;
		Bureaucrat	officer4 = officer3;

		std::cout << std::endl;

		std::cout << "Officer1: " << officer1;
		std::cout << "Officer2: " << officer2;
		std::cout << "Officer3: " << officer3;
		std::cout << "Officer4: " << officer4;

		std::cout << std::endl;
	}

	{
		std::cout << std::endl << YELLOW GDTHTL RESET << std::endl << \
		std::endl;
		try
		{
			Bureaucrat officer5("Officer5", GRD_MIN + 1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			Bureaucrat officer6("Officer6", GRD_MAX - 1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	{
		std::cout << YELLOW INCDEC1 RESET << std::endl << std::endl;
		try
		{
			Bureaucrat officer7("Officer7", GRD_MAX);
			std::cout << CYAN CHGRD RESET WHITE << officer7.getGrade() \
			<< RESET << std::endl;
			std::cout << MAGENTA INCGRD RESET << std::endl;
			officer7.incrementGrade();
			std::cout << officer7 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			std::cout << std::endl;
			Bureaucrat officer8("Officer8", GRD_MIN);
			std::cout << CYAN CHGRD RESET WHITE << officer8.getGrade() \
			<< RESET << std::endl;
			std::cout << MAGENTA DECGRD RESET << std::endl;
			officer8.decrementGrade();
			std::cout << officer8 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	
	{
		std::cout << YELLOW INCDEC2 RESET << std::endl << std::endl;
		try 
		{
			Bureaucrat officer9("Officer9", 43);
			std::cout << officer9.getName() << CYAN GRADE RESET WHITE << \
			officer9.getGrade() << RESET << std::endl;
			officer9.incrementGrade();
			std::cout << officer9.getName() << CYAN GETGR RESET WHITE << \
			officer9.getGrade() << RESET CYAN AFTINC RESET << std::endl;
		} 
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;

		try
		{
			Bureaucrat officer10("Officer10", 142);
			std::cout << officer10.getName() << CYAN GRADE RESET WHITE << \
			officer10.getGrade() << RESET << std::endl;
			officer10.decrementGrade();
			std::cout << officer10.getName() << CYAN GETGR RESET WHITE << \
			officer10.getGrade() << RESET CYAN AFTDEC RESET << std::endl;
		} 
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	return (EXIT_SUCCESS);
}

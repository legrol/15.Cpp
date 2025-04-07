/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:52:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/30 21:53:36 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

/**
 * @brief Base* generate(void)
 *
 * Creates a new instance of a class derived from Base (A, B, or C) randomly.
 * Uses `rand()` to select which derived class to instantiate.
 *
 * @return 								A pointer to a new object of type A, B,
 * 										or C.
 * 
 * 
 * @brief void identify(Base* p)
 *
 * Identifies the dynamic type of the object pointed to by `p` using 
 * `dynamic_cast`.
 * Prints the class name (A, B, or C) to standard output.
 *
 * @param p 							Pointer to an instance of Base or a 
 * 										derived class.
 * 
 * 
 * @brief void identify(Base& p)
 *
 * Identifies the dynamic type of the object referenced by `p` using 
 * `dynamic_cast` with references.
 * Uses nested try-catch blocks to handle failed casts and prints the class 
 * name accordingly.
 *
 * @param p 							Reference to an instance of Base or a 
 * 										derived class.
 * 
 * 
 * @brief int main(void)
 *
 * Entry point of the program.
 * Calls `generate()` multiple times to create random objects and identify 
 * their type using both pointer and reference.
 * Demonstrates polymorphism and `dynamic_cast` usage.
 *
 * @return 								EXIT_SUCCESS on successful execution.
 * 
 */

Base* generate(void)
{
	switch (int success = rand() % 3)
	{
		case 0: 
			return (new A());
		case 1: 
			return (new B());
		case 2: 
			return (new C());
		default:
			return (NULL);
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << WHITE OBTYP RESET << CYAN CHA RESET GREEN TYPPOI \
		RESET << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << WHITE OBTYP RESET << CYAN CHB RESET GREEN TYPPOI \
		RESET << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << WHITE OBTYP RESET << CYAN CHC RESET GREEN TYPPOI \
		RESET << std::endl;
	}
	else
		std::cout << RED UNKTYP RESET << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << WHITE OBTYP RESET << BLUE CHA RESET GREEN TYPREF RESET \
		<< std::endl;
	}
	catch (std::exception &e)
	{
		try
		{
			(void) dynamic_cast<B&>(p);
			std::cout << WHITE OBTYP RESET << BLUE CHB RESET GREEN TYPREF \
			RESET << std::endl;
		}
		catch (std::exception &e)
		{
			try
			{
				(void) dynamic_cast<C&>(p);
				std::cout << WHITE OBTYP RESET << BLUE CHC RESET GREEN \
				TYPREF RESET << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << RED UNKTYP RESET << std::endl;
			}
			
		}	
	}
}

int main(void)
{
	print_banner();

	srand((unsigned)time(NULL));

	Base *p;
	for (int i = 0; i < 7; i++)
	{
		std::cout << YELLOW TEST << i + 1 << DOUDOT RESET << std::endl;
		p = generate(); 
		identify(p); 
		identify(*p);
		delete p; 
		std::cout << std::endl;
		sleep(1);
	}

	Base *c = NULL;
	identify(c);
	if (c)
		identify(*c);
	else
		std::cout << RED UNKTYP RESET << std::endl;

	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

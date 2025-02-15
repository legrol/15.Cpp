/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:47:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/16 00:12:50 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/macros.hpp"

/**
 * The function `main` demonstrates the use of pointers and references in C++. 
 * It creates a string variable, assigns its address to a pointer, and creates 
 * a reference to the same variable. It then displays the memory addresses and 
 * values of the variable, pointer, and reference.
 * 
 * @return int                      Returns `EXIT_SUCCESS` upon successful 
 *                                  execution of the program.
 * 
 * @note                            The program outputs:
 *                                  - Memory addresses of the variable,
 * 										pointer, and reference.
 *                                  - Values of the variable, dereferenced 
 * 										pointer, and reference.
 *                                  It serves as an example of how pointers 
 *                                  and references operate in C++.
 * 
 */

int	main(void)
{
	print_banner();
	
	std::string		var = "HI THIS IS BRAIN";
	std::string*	stringPTR = &var;
	std::string&	stringREF = var;

	std::cout << ULGREEN MEM_AD RESET << std::endl<< std::endl;
	std::cout << CYAN MEM_AD_VAR RESET << &var << std::endl;
	std::cout << CYAN MEM_AD_PTR RESET << stringPTR << std::endl;
	std::cout << CYAN MEM_AD_REF RESET << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << ULGREEN MEM_VL RESET << std::endl<< std::endl;
	std::cout << CYAN MEM_VL_VAR RESET << var << std::endl;
	std::cout << CYAN MEM_VL_PTR RESET << *stringPTR << std::endl;
	std::cout << CYAN MEM_VL_REF RESET << stringREF << std::endl;
	std::cout << std::endl;
}

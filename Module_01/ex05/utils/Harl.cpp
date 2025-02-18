/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 08:54:20 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/18 18:58:54 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

/**
 * The function `Harl::Harl` is the default constructor for the `Harl` class.
 * It initializes an instance of `Harl` but does not perform any specific 
 * operations upon instantiation.
 * 
 * 
 * The function `Harl::~Harl` is the destructor for the `Harl` class.
 * It ensures that any allocated resources associated with the `Harl` 
 * instance are cleaned up when the object goes out of scope.
 * 
 * 
 * The function `Harl::complain` processes a given complaint level and 
 * calls the corresponding member function (debug, info, warning, or error).
 * 
 * @param std::string level   A string representing the complaint level:
 *                            - "DEBUG"
 *                            - "INFO"
 *                            - "WARNING"
 *                            - "ERROR"
 * 
 * @return void               No return value.
 * 
 * Process:
 * - Defines an array of function pointers, each pointing to a specific 
 *   member function of `Harl`.
 * - Defines an array of strings corresponding to the complaint levels.
 * - Iterates through the `choice` array, comparing the input level.
 * - If a match is found, the corresponding function is called.
 * 
 * 
 * The function `Harl::debug` prints a debug message to the console.
 * It represents the least severe complaint level, used for internal 
 * debugging information.
 * 
 * @return void   No return value.
 * 
 * 
 * The function `Harl::info` prints an informational message to the console.
 * This level provides additional details about the program's execution.
 * 
 * @return void   No return value.
 * 
 * 
 * The function `Harl::warning` prints a warning message to the console.
 * This level is used to indicate potential issues or situations that 
 * might require attention.
 * 
 * @return void   No return value.
 * 
 * 
 * The function `Harl::error` prints an error message to the console.
 * This is the most severe level of complaint, indicating that something 
 * has gone wrong.
 * 
 * @return void   No return value.
 * 
 */

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::complain(std::string level)
{
	void (Harl::*ptr_level[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	choice[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (choice[i] == level)
			(this->*ptr_level[i])();
	}
}

void	Harl::debug(void) 
{
	std::cout << ORANGE DBG RESET << std::endl;
	std::cout << CYAN DBG1 RESET<< std::endl;
	std::cout << CYAN DBG2 RESET<< std::endl;
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << ORANGE INF RESET << std::endl;
	std::cout << GREEN INF1 RESET<< std::endl;
	std::cout << GREEN INF2 RESET<< std::endl;
	std::cout << GREEN INF3 RESET<< std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << ORANGE WRN RESET << std::endl;
	std::cout << YELLOW WRN1 RESET<< std::endl;
	std::cout << YELLOW WRN2 RESET<< std::endl;
	std::cout << std::endl;

}

void	Harl::error(void)
{
	std::cout << ORANGE ERR RESET << std::endl;
	std::cout << RED ERR1 RESET<< std::endl;
	std::cout << RED ERR2 RESET<< std::endl;
	std::cout << std::endl;
}

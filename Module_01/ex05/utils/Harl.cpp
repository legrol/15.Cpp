/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-18 08:54:20 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-02-18 08:54:20 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

/**
 * 
 * 
 * 
 * 
 * 
 * 
 * 
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
	std::string	options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (options[i] == level)
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

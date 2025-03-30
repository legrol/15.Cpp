/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   banner.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:04:23 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/25 17:22:57 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

/**
 * The function "print_banner" generates sthe project start banner. 
 * 
 */

void    print_banner(void)
{
		std::cout << (RED 		"   ____    	      " RESET) << std::endl;
		std::cout << (RED 		"  / ___|             " RESET) << std::endl;
		std::cout << (YELLOW 	" | |   ___   ___     " RESET) << std::endl;
		std::cout << (YELLOW 	" | |  |  _ \\|  _ \\    " RESET) << std::endl;
		std::cout << (YELLOW	" | |__| |_) | |_) |   " RESET) << std::endl;
		std::cout << (RED		"  \\___|  _ /|  _ /   " RESET) << std::endl;
		std::cout << (RED		"      |_|   |_|  " RESET) << std::endl;
		std::cout << std::endl;
		std::cout << (RED" Welcome to " RESET BDBLUE"CPP Module 06 " RESET \
		CYAN "ex00 " RESET RED"project by " GREEN "rdel-olm") << std::endl;
		std::cout << std::endl;
}

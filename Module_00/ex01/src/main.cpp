/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:46:50 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/09 00:42:58 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/collection.hpp"

/**
 * The `main` function serves as the entry point for the program. It creates an 
 * instance of the `PhoneBook` class and provides a command-line interface for 
 * users to add, search, or exit the program.
 * 
 * @return int                   Returns 0 to indicate successful program 
 *                               execution.
 * 
 */

int	main(void)
{
	PhoneBook ph1;
	std::string	str;

	while (str != "EXIT")
	{
		std::cout << YELLOW COMMAND RESET;
		std::getline(std::cin, str);
		if (str == "ADD")
			ph1.add_contact();
		else if (str == "SEARCH")
			ph1.search_contact();
		else if (str != "EXIT")
			std::cout << YELLOW ERROR RESET RED INV_CMD RESET << std::endl;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:45:43 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/15 14:17:35 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/**
 * The main function serves as the entry point for the program. It demonstrates 
 * the creation and destruction of Zombie instances using both stack and heap 
 * allocation.
 * 
 * @return int                  Returns 0 on successful execution.
 * 
 * Functionality:
 * - Prints a banner at the start of the program.
 * - Prompts the user for the name of a Zombie to create using stack allocation 
 *   (via `randomChump`).
 * - Prompts the user for the name of a Zombie to create using heap allocation 
 *   (via `newZombie`).
 * - Ensures proper cleanup of Zombies created on the heap by deleting them.
 * - Handles `EOF` errors gracefully during input.
 * 
 */

int main()
{
	std::string	zombie_name;
	Zombie *other_zombie;

	print_banner();

	std::cout << GREEN NAME_ZB_1 RESET;
	std::getline(std::cin, zombie_name);
	if (std::cin.eof()){
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << BDRED EOF_ERR RESET << std::endl;
	}

	randomChump(zombie_name);

	std::cout << GREEN NAME_ZB_2 RESET;
	std::getline(std::cin, zombie_name);
	if (std::cin.eof()){
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << BDRED EOF_ERR RESET << std::endl;
	}

	other_zombie = newZombie(zombie_name);
	delete other_zombie;
	return (0);
}

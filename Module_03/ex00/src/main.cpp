/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-24 11:50:57 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-02-24 11:50:57 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

/**
 * The `main` function serves as the entry point of the program. It 
 * demonstrates the functionality of the `ClapTrap` class by creating an 
 * instance and performing various actions such as attacking, taking damage, 
 * and repairing.
 *
 * @return int  Returns `EXIT_SUCCESS` upon successful execution.
 * 
 */

int	main(void)
{
	print_banner();

	ClapTrap wall_e("Wall-e");
	wall_e.attack("a box");
	wall_e.takeDamage(6);
	wall_e.attack("a 2nd box");
	wall_e.beRepaired(15);
	wall_e.attack("a 3rd box");
	wall_e.attack("a 4th box");
	wall_e.attack("a 5th box");
	wall_e.attack("a 6th box");
	wall_e.takeDamage(11);

	wall_e.attack("a 7th box");

	std::cout << std::endl;
	
	return (EXIT_SUCCESS);	
}

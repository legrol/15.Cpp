/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:50:57 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/27 21:42:15 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

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

	// wall_e.takeDamage(6);
	// wall_e.attack("a 2nd box");
	// wall_e.beRepaired(15);
	// wall_e.attack("a 3rd box");
	// wall_e.attack("a 6th box");
	// wall_e.takeDamage(11);

	// wall_e.attack("a 7th box");

	ScavTrap wall_e("Wall-e");

	wall_e.getHitPoints();
	wall_e.getEnergyPoints();	

	wall_e.guardGate();
	wall_e.attack("a box");
	wall_e.getHitPoints();
	wall_e.getEnergyPoints();	

	wall_e.attack("a 2nd box");
	wall_e.getHitPoints();
	wall_e.getEnergyPoints();

	wall_e.guardGate();
	wall_e.attack("a 3rd box");

	std::cout << std::endl;
	
	return (EXIT_SUCCESS);	
}

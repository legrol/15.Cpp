/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:50:57 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/27 23:09:16 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

/**
 * The `main` function serves as the entry point of the program. It 
 * initializes a `ScavTrap` object named "Wall-e" and demonstrates its various 
 * functionalities.
 * The program prints the banner, calls different ScavTrap methods, and 
 * displays `hit points` and `energy points` at different stages.
 * 
 * @return int  Returns `EXIT_SUCCESS` after executing all operations.
 * 
 */

int	main(void)
{
	print_banner();

	FragTrap wall_e("Wall-e");

	wall_e.getHitPoints();
	wall_e.getEnergyPoints();	


	wall_e.attack("a box");
	wall_e.getHitPoints();
	wall_e.getEnergyPoints();	

	wall_e.attack("a 2nd box");
	wall_e.getHitPoints();
	wall_e.getEnergyPoints();

	wall_e.attack("a 3rd box");
	wall_e.getHitPoints();
	wall_e.getEnergyPoints();

	wall_e.highFivesGuys();

	std::cout << std::endl;
	
	return (EXIT_SUCCESS);	
}

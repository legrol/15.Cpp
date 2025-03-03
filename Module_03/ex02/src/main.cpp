/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:50:57 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/27 23:24:09 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

/**
 * The `main` function initializes a `FragTrap` instance and tests its
 * abilities such as attacking and requesting high fives.
 * It also displays the character's health and energy levels after each action.
 * 
 * @return int  Returns `EXIT_SUCCESS` upon successful execution.
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:50:57 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/28 23:52:09 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

/**
 * The `main` function initializes and tests the behavior of the `DiamondTrap`
 * class, which inherits from `ClapTrap`, `ScavTrap`, and `FragTrap`. It 
 * creates multiple instances of `DiamondTrap`, calls various methods, and 
 * prints their states.
 *
 * - Creates a `DiamondTrap` named "Wall-e".
 * - Calls `whoAmI()`, `guardGate()`, and `highFivesGuys()`.
 * - Creates another `DiamondTrap` named "EVA".
 * - Prints EVA’s hit points and energy points before and after attacking.
 * - Demonstrates attacks using `eva.attack("robot")`.
 * - Calls `guardGate()` and `highFivesGuys()` after the attacks.
 * - Creates a third `DiamondTrap` named "Robot".
 * - Displays the initial hit points of "Robot".
 * - Inflicts 100 damage to "Robot" using `takeDamage(100)`.
 * - Prints "Robot"’s hit points after taking damage.
 * - Calls `highFivesGuys()` to show the response when HP is 0.
 * - Finally, exits the program with `EXIT_SUCCESS`.
 *
 * @return int Returns `EXIT_SUCCESS` when the program terminates correctly.
 * 
 * 
 */

int	main(void)
{
	print_banner();

	DiamondTrap wall_e("Wall-e");

	std::cout << std::endl;
	wall_e.whoAmI();
	wall_e.guardGate();
	wall_e.highFivesGuys();
	
	std::cout << std::endl << YELLOW SPACES RESET << std::endl << std::endl;

	DiamondTrap eva("EVA");

	std::cout << std::endl;
	eva.whoAmI();
	eva.guardGate();
	std::cout << std::endl << BLUE "EVA Hit Points: " RESET << \
	eva.FragTrap::getHitPoints() << std::endl;
	std::cout << BLUE "EVA Energy Points: " RESET << \
	eva.ScavTrap::getEnergyPoints() << std::endl << std::endl;
	for (int i = 1; i < 4; i++)
	{
		std::cout << i << " : ";
		eva.attack("robot");
	}
	std::cout << std::endl << BLUE "EVA Hit Points: " RESET << \
	eva.FragTrap::getHitPoints() << std::endl;
	std::cout << BLUE "EVA Energy Points: " RESET << \
	eva.ScavTrap::getEnergyPoints() << std::endl;
	eva.guardGate();
	eva.highFivesGuys();

	std::cout << std::endl << YELLOW SPACES RESET << std::endl << std::endl;
	
	DiamondTrap robot("Robot");

	std::cout << std::endl;
	robot.whoAmI();
	std::cout << std::endl;
	std::cout << BLUE "Robot Hit Points: " RESET << \
	robot.FragTrap::getHitPoints() << std::endl << std::endl;
	robot.takeDamage(100);
	std::cout << std::endl << BLUE "Robot Hit Points: " RESET << \
	robot.FragTrap::getHitPoints() << std::endl;
	robot.highFivesGuys();

	std::cout << std::endl << YELLOW SPACES RESET << std::endl << std::endl;
	
	return (EXIT_SUCCESS);	
}

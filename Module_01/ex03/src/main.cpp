/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 16:44:27 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/16 20:25:20 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

/**
 * The `main` function demonstrates the usage of the `Weapon`, `HumanA`, and 
 * `HumanB` classes.
 * It creates `Weapon` objects and assigns them to two types of human objects 
 * (`HumanA` and `HumanB`), showing how changes to the weapon's type affect 
 * their behavior.
 * 
 * The program is divided into two blocks:
 * - The first block uses `HumanA`, where the weapon is passed by reference 
 * 	 during construction.
 * - The second block uses `HumanB`, where the weapon is set after the object 
 *   is created.
 * 
 * @return int   Returns `EXIT_SUCCESS` (0) on successful execution.
 * 
 * Example Usage:
 * - Creates a weapon with a specific type.
 * - Changes the type of the weapon dynamically.
 * - Demonstrates both immediate and deferred weapon assignment.
 * 
 */

int	main(void)
{
	print_banner();
	
	{
		Weapon club = Weapon(CR_SP_CL);

		HumanA bob(B, club);
		bob.attack();
		club.setType(SO_OT_TY);
		bob.attack();
	}

	std::cout << std::endl;

	{
		Weapon club = Weapon(CR_SP_CL);
		HumanB jim(J);
		jim.setWeapon(club);
		jim.attack();
		club.setType(SO_OT_TY);
		jim.attack();
	}

	std::cout << std::endl;
	return EXIT_SUCCESS;

}

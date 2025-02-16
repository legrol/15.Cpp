/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 16:56:04 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/16 21:31:38 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"

/**
 * Constructor for the `HumanA` class.
 * Initializes a `HumanA` object with a given name and weapon reference.
 * 
 * @param std::string name     The name of the `HumanA` object.
 * @param Weapon &weapon       A reference to the weapon used by the `HumanA` 
 * 							   object.
 * 
 * Example Usage:
 * - Creates a `HumanA` object and immediately assigns it a weapon.
 * 
 * Outputs:
 * - Logs a message indicating the creation of a `HumanA` object with the 
 * 	 assigned weapon type.
 * 
 * 
 * Destructor for the `HumanA` class.
 * Destroys the `HumanA` object and logs a message indicating its destruction.
 * 
 * Example Usage:
 * - Automatically called when a `HumanA` object goes out of scope or is 
 *   explicitly deleted.
 * 
 * Outputs:
 * - Logs a message indicating the destruction of the `HumanA` object.
 * 
 * 
 * The function "attack" prints a message indicating that the `HumanA` 
 * instance is attacking with their weapon. It retrieves the weapon's type 
 * using the `getType` function.
 * 
 * @return void              No return value.
 * 
 * Example Output:
 * "[HumanA_Name] attacks with their [Weapon_Type]"
 * 
 */

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), \
_weapon(weapon)
{
	std::cout << CYAN HUM_A << name << CREATED << weapon.getType() << RESET \
	<< std::endl << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << std::endl << BDRED HUM_A << this->_name << DESTROYED RESET \
	<< std::endl;	
}

void	HumanA::attack(void)
{
	std::cout << GREEN << this->_name << RESET YELLOW ATTACK RESET \
	<< this->_weapon.getType() << std::endl;

}

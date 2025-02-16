/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 16:56:28 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/16 21:30:45 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanB.hpp"

/**
 * Constructor for the `HumanB` class.
 * Initializes a `HumanB` object with a given name and sets the weapon to 
 * `NULL` (unassigned).
 * 
 * @param std::string name   The name of the `HumanB` object.
 * 
 * Example Usage:
 * - Creates a `HumanB` object without assigning a weapon during 
 *   initialization.
 * 
 * Outputs:
 * - Logs a message indicating the creation of a `HumanB` object without a 
 *   weapon.
 * 
 * 
 * Destructor for the `HumanB` class.
 * Destroys the `HumanB` object and logs a message indicating the destruction.
 * 
 * Example Usage:
 * - Automatically called when a `HumanB` object goes out of scope or is 
 *   explicitly deleted.
 * 
 * Outputs:
 * - Logs a message indicating the destruction of the `HumanB` object.
 *  
 * 
 * The function "attack" prints a message indicating that the `HumanB` instance
 * is attacking with their weapon. It uses the weapon's type retrieved via the
 * `getType` function.
 * 
 * @return void              No return value.
 * 
 * Example Output:
 * "[HumanB_Name] attacks with their [Weapon_Type]"
 * 
 * 
 * The function "setWeapon" assigns a weapon to the `HumanB` instance.
 * It sets the private `_weapon` member to reference the provided `Weapon` 
 * object.
 * 
 * @param Weapon &weapon     A reference to a `Weapon` object that will be 
 *                           associated with the `HumanB` instance.
 * 
 * @return void              No return value. Updates the `_weapon` member 
 *                           directly.
 * 
 */

HumanB::HumanB(std::string name)
{
	this->_weapon = NULL;
	this->_name = name;
	
	std::cout << CYAN HUM_B << this->_name << CREATED RESET << std::endl \
	<< std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << std::endl << BDRED HUM_B << this->_name << DESTROYED RESET \
	<< std::endl;	
}

void	HumanB::attack(void)
{
	std::cout << GREEN << this->_name << RESET WHITE ATTACK RESET \
	<< (*this->_weapon).getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

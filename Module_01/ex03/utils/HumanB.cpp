/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 16:56:28 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/16 20:57:30 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanB.hpp"

/**
 * Constructor for the `HumanB` class.
 * Initializes a `HumanB` object with a name.
 * 
 * @param std::string name   The name of the HumanB instance.
 * 
 * @return void              No return value.
 * 
 * 
 * Destructor for the `HumanB` class.
 * Cleans up resources associated with the `HumanB` object.
 * 
 * @return void              No return value.
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

HumanB::HumanB(std::string name) : _name(name)
{
	
}

HumanB::~HumanB(void)
{
		
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

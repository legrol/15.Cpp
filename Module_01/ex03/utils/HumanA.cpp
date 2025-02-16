/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 16:56:04 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/16 20:20:43 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"

/**
 * Constructor for the `HumanA` class.
 * Initializes a `HumanA` object with a name and a reference to a `Weapon` 
 * object.
 * 
 * @param std::string name   The name of the `HumanA` instance.
 * @param Weapon &weapon     A reference to the `Weapon` object associated with 
 *                           the `HumanA` instance.
 * 
 * @return void              No return value.
 * 
 * 
 * Destructor for the `HumanA` class.
 * Cleans up resources associated with the `HumanA` object.
 * 
 * @return void              No return value.
 * 
 * 
 * The function "attack" prints a message indicating that the `HumanA` instance
 * is attacking with their weapon. It retrieves the weapon's type using the 
 * `getType` function.
 * 
 * @return void              No return value.
 * 
 * Example Output:
 * "[HumanA_Name] attacks with their [Weapon_Type]"
 * 
 */

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;	
}

void	HumanA::attack(void)
{
	std::cout << GREEN << this->_name << RESET YELLOW ATTACK RESET \
	<< this->_weapon.getType() << std::endl;

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 23:14:32 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/28 23:26:14 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

/**
 * The `DiamondTrap` default constructor initializes an instance with 
 * a default name `"anonymus"` and sets the `ClapTrap` name to 
 * `"anonymus_clap_name"`.
 * It prints a message confirming the creation of the object.
 * 
 * 
 * The `DiamondTrap` parameterized constructor initializes an instance 
 * with a given name, setting its `ClapTrap` name to `name + "_clap_name"`.
 * It also inherits `FragTrap`'s hit points and attack damage, and `ScavTrap`'s 
 * energy points.
 * 
 * @param name  A string representing the name of the `DiamondTrap`.
 * 
 * 
 * The `DiamondTrap` copy constructor creates a new `DiamondTrap` object 
 * as a copy of an existing one. It retains the attributes of the original 
 * object.
 * 
 * @param copy  Reference to the `DiamondTrap` object to be copied.
 * 
 * 
 * The `DiamondTrap` destructor prints a message confirming that the object 
 * is being destroyed.
 * 
 * 
 * The `operator=` overload assigns the attributes of one `DiamondTrap` 
 * instance to another. It ensures that the new object retains the values 
 * of the original.
 * 
 * @param origin  Reference to the `DiamondTrap` object being copied.
 * @return DiamondTrap&  A reference to the assigned object.
 *
 *  
 * The `whoAmI` function prints the name of the `DiamondTrap` instance 
 * along with its `ClapTrap` name.
 * If the instance has no energy or is already at 0 HP, it prevents 
 * the action and prints a message accordingly.
 * 
 */

DiamondTrap::DiamondTrap(void) : ClapTrap("anonymus_clap_name"), \
 _name("anonymus")
{
	std::cout << CYAN APP4_NAME RESET << this->_name << CYAN BLT2_OK RESET \
	<< std::endl;	
}

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(name + \
"_clap_name"), _name(name)
{
	this->_hit_points = FragTrap::getHitPoints();
	this->_energy_points = ScavTrap::getEnergyPoints();
	this->_attack_damage = FragTrap::getAttackDamage();
	std::cout << CYAN APP4_NAME RESET << this->_name << CYAN BLT_OK RESET \
	<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy):  ClapTrap(copy), \
ScavTrap(copy), FragTrap(copy), _name(copy._name)
{
	std::cout << CYAN APP4_NAME RESET << this->_name << CYAN BLT3_OK RESET \
	<< std::endl << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << CYAN APP4_NAME RESET << this->_name << CYAN DBLT_OK RESET \
	<< std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &origin)
{
	ClapTrap::operator=(origin);
	ScavTrap::operator=(origin);
	FragTrap::operator=(origin);
	this->_name = origin._name;
	this->_hit_points = origin._hit_points;
	this->_energy_points = origin._energy_points;
	this->_attack_damage = origin._attack_damage;
	this->gateKeeperMode = origin.gateKeeperMode;	
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	if (this->_hit_points == 0)
	{
		std::cout << std::endl << this->_name << RED DEATH1 RESET << std::endl;
		return ;
	}
	else if (this->_energy_points == 0)
	{
		std::cout << std::endl << this->_name << RED WT1_EP RESET << std::endl;
		return ;
	}
	else
	{
		std::cout << MAGENTA MYNAME RESET << this->_name << MAGENTA NM_CLTR \
		RESET << this->ClapTrap::_name << std::endl;
	}
}

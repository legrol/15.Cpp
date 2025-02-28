/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 22:08:29 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/28 23:26:54 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

/**
 * The `FragTrap` default constructor initializes an instance of `FragTrap`
 * with predefined maximum hit points, energy points, and attack damage.
 * It also prints a message confirming the creation of the object.
 * 
 * 
 * The `FragTrap` parameterized constructor initializes an instance of 
 * `FragTrap` with a given name and predefined maximum attributes.
 * It prints a message confirming the creation of the object.
 * 
 * @param name  A string representing the name of the `FragTrap`.
 * 
 * 
 * The `FragTrap` copy constructor creates a new `FragTrap` object as a 
 * copy of an existing one. It retains the attributes of the original object.
 * 
 * @param copy  Reference to the `FragTrap` object to be copied.
 * 
 * 
 * The `FragTrap` destructor prints a message confirming that the object 
 * is being destroyed.
 * 
 * 
 * The `operator=` overload assigns the attributes of one `FragTrap` 
 * instance to another. It ensures that the new object retains the values 
 * of the original.
 * 
 * @param origin  Reference to the `FragTrap` object being copied.
 * @return FragTrap&  A reference to the assigned object.
 * 
 * 
 * The `highFivesGuys` function requests a high five from teammates.
 * If the character has no energy or is already at 0 HP, it prevents 
 * the action and prints a message accordingly.
 * 
 * 
 * The `getHitPoints` function retrieves the current hit points of 
 * the `FragTrap`.
 * 
 * @return int  The current hit points.
 * 
 * 
 * The `getAttackDamage` function retrieves the current attack damage 
 * value of the `FragTrap`.
 * 
 * @return int  The attack damage.
 * 
 */

FragTrap::FragTrap(void): ClapTrap()
{
	this->_hit_points = MAX_HP_FT;
	this->_energy_points = MAX_EP_FT;
	this->_attack_damage = MIN_AD_FT;
	std::cout << CYAN APP3_NAME RESET << this->_name << CYAN BLT2_OK RESET \
	<< std::endl;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	this->_hit_points = MAX_HP_FT;
	this->_energy_points = MAX_EP_FT;
	this->_attack_damage = MIN_AD_FT;
	std::cout << CYAN APP3_NAME RESET << this->_name << CYAN BLT_OK RESET \
	<< std::endl;
}

FragTrap::FragTrap(const FragTrap& copy): ClapTrap(copy)
{
	std::cout << CYAN APP3_NAME RESET << this->_name << CYAN BLT3_OK RESET \
	<< std::endl << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << CYAN APP3_NAME RESET << this->_name << CYAN DBLT_OK RESET \
	<< std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &origin)
{
	ClapTrap::operator=(origin);
	this->_name = origin._name;
	this->_hit_points = origin._hit_points;
	this->_energy_points = origin._energy_points;
	this->_attack_damage = origin._attack_damage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	if (this->_hit_points == 0)
	{
		std::cout << std::endl << this->_name << RED DEATH1 RESET << std::endl;
		return ;
	}
	if (this->_energy_points == 0)
	{
		std::cout << std::endl << this->_name << RED WT1_EP RESET << std::endl;
		return ;
	}
	std::cout << std::endl << this->_name << GREEN FIVGUY RESET << std::endl;

}

int	FragTrap::getHitPoints(void)
{
	return (this->_hit_points);
}

int	FragTrap::getAttackDamage(void)
{
	return (this->_attack_damage);
}

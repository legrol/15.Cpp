/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 22:08:29 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/28 20:38:19 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

/**
 * The `FragTrap` class is a specialized version of `ClapTrap`, 
 * inheriting its attributes and behaviors while adding unique abilities 
 * like `highFivesGuys`.
 *
 * 
 * Default constructor for the `FragTrap` class.
 * Initializes hit points, energy points, and attack damage to higher values.
 * 
 * 
 * Parameterized constructor for the `FragTrap` class.
 * Assigns a custom name while setting hit points, energy points, and 
 * attack damage specific to `FragTrap`.
 * 
 * @param name  The name of the `FragTrap` instance.
 * 
 * 
 * Copy constructor for the `FragTrap` class.
 * Copies attributes from an existing `FragTrap` object.
 * 
 * @param copy  The `FragTrap` object to copy.
 * 
 * 
 * Destructor for the `FragTrap` class.
 * Displays a message when the object is destroyed.
 * 
 * 
 * Overloaded assignment operator for the `FragTrap` class.
 * Copies the attributes of an existing `FragTrap` object to another.
 * 
 * @param origin  The `FragTrap` object whose values are being assigned.
 * @return FragTrap&  A reference to the updated `FragTrap` instance.
 * 
 * 
 * The `attack` function allows `FragTrap` to attack a target.
 * 
 * @param target  The target being attacked.
 * 
 * 
 * The `highFivesGuys` function allows `FragTrap` to request high fives 
 * from its teammates.
 * Displays a message when activated.
 * 
 * 
 * The `getEnergyPoints` function displays the current energy points of the 
 * `FragTrap`.
 * 
 * 
 * The `getHitPoints` function displays the current hit points of the 
 * `FragTrap`.
 * 
 */

FragTrap::FragTrap(void): ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << CYAN APP3_NAME RESET << this->_name << CYAN BLT2_OK RESET \
	<< std::endl;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
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

void FragTrap::attack(const std::string& target)
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
	std::cout << std::endl << GREEN APP3_NAME RESET << this->_name << YELLOW \
	ATTACK RESET << target << YELLOW CAU RESET <<  this->_attack_damage <<  \
	YELLOW PT_DMG RESET << std::endl;
	this->_energy_points -= 1;
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

void	FragTrap::getEnergyPoints(void)
{
	std::cout << YELLOW GET_EP RESET << this->_energy_points << std::endl;
}

void	FragTrap::getHitPoints(void)
{
	std::cout << std::endl << YELLOW GET_HP RESET << this->_hit_points \
	<< std::endl;
}

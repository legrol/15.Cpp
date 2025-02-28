/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:49:40 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/28 23:27:30 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

/**
 * The default constructor `ClapTrap::ClapTrap(void)` initializes a `ClapTrap` 
 * object with default values: name as "anonymus", hit points at 10, energy 
 * points at 10, and attack damage at 0.
 * 
 * 
 * The copy constructor `ClapTrap::ClapTrap(const ClapTrap& copy)` creates a 
 * new `ClapTrap` object by copying the attributes of an existing one.
 *
 * @param copy  			A reference to an existing `ClapTrap` object.
 * 
 * 
 * The parameterized constructor `ClapTrap::ClapTrap(const std::string& name)` 
 * initializes a `ClapTrap` object with a specified name and default values 
 * for hit points, energy points, and attack damage.
 *
 * @param name  			A string representing the name of the `ClapTrap`.
 * 
 * 
 * The destructor `ClapTrap::~ClapTrap(void)` handles object cleanup when a 
 * `ClapTrap` instance goes out of scope.
 * 
 * 
 * The `takeDamage` function decreases the `hit_points` of the `ClapTrap` when 
 * it takes damage. If `hit_points` drop to 0, the `ClapTrap` "dies".
 *
 * @param amount  			The amount of damage received.
 * 
 * 
 * The `beRepaired` function restores a specified amount of hit points to the 
 * `ClapTrap`, provided it has energy left.
 *
 * @param amount  			The amount of hit points to be restored.
 * 
 * 
 * The assignment operator `operator=` copies the values of an existing 
 * `ClapTrap` instance into another one.
 *
 * @param origin  			A reference to the `ClapTrap` object to be copied.
 * 
 * @return  				A reference to the modified `ClapTrap` object.
 * 
 */

ClapTrap::ClapTrap(void): _name("anonymus"), _hit_points(MAX_HP_CT), \
_energy_points(MAX_EP_CT), _attack_damage(MIN_AD_CT)
{
	std::cout << CYAN APP_NAME RESET << this->_name << CYAN BLT_OK RESET \
	<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
	std::cout << CYAN APP_NAME RESET << this->_name << CYAN BLT_OK RESET \
	<< std::endl;
}
ClapTrap::ClapTrap(const std::string& name): _name(name), \
_hit_points(MAX_HP_CT), _energy_points(MAX_EP_CT), _attack_damage(MIN_AD_CT)
{
	std::cout << CYAN APP_NAME RESET << this->_name << \
	CYAN BLT_OK RESET << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout  << CYAN APP_NAME RESET << this->_name << CYAN \
	DBLT_OK RESET << std::endl << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <=1)
	{
		std::cout << BLUE APP_NAME RESET << this->_name << YELLOW RCV_DMG RESET\
		 << amount << YELLOW RCV_DMG1 RESET << std::endl;
	}
	else if (amount > 1)
	{
		std::cout << BLUE APP_NAME RESET << this->_name << YELLOW RCV_DMG RESET\
		 << amount << YELLOW RCV_DMG2 RESET << std::endl;
	}
	this->_hit_points -= amount;
	if (this->_hit_points < 0)
		this->_hit_points = 0;
	if (this->_hit_points == 0)
	{
		std::cout << ORANGE APP_NAME RESET << this->_name << ORANGE DEATH \
		RESET << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points == 0)
	{
		std::cout << std::endl << this->_name << RED DEATH1 RESET << std::endl;
		return ;
	}
	if (this->_energy_points == 0)
	{
		std::cout << std::endl << this->_name << RED WT_EP RESET << std::endl;
		return ;
	}	
	std::cout << BLUE APP_NAME RESET << this->_name << YELLOW SF_RPR RESET \
	<< amount << YELLOW POINTS RESET << std::endl;
	this->_hit_points += amount;
	if (this->_hit_points > MAX_HP_CT)
	{
		this->_hit_points = MAX_HP_CT;
		std::cout << MAGENTA APP_NAME RESET << this->_name << MAGENTA PT_MAX \
		RESET << std::endl;
	}
	this->_energy_points -= 1;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &origin)
{
	this->_name = origin._name;
	this->_hit_points = origin._hit_points;
	this->_energy_points = origin._energy_points;
	this->_attack_damage = origin._attack_damage;
	return (*this);
}

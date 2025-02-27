/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 22:08:29 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/27 23:10:37 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

/**
 * 
 * 
 * 
 * 
 * 
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
	*this = copy;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:36:27 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/27 21:45:02 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

/**
 * 
 * 
 * 
 * 
 * 
 */

ScavTrap::ScavTrap(void): ClapTrap(), gateKeeperMode(false)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << CYAN APP2_NAME RESET << this->_name << CYAN BLT2_OK RESET \
	<< std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name), \
gateKeeperMode(false)
{
	std::cout << CYAN APP2_NAME RESET << this->_name << CYAN BLT_OK RESET \
	<< std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;	
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy), \
gateKeeperMode(copy.gateKeeperMode)
{
	*this = copy;
	std::cout << CYAN APP2_NAME RESET << this->_name << CYAN BLT3_OK RESET \
	<< std::endl << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << CYAN APP2_NAME RESET << this->_name << CYAN DBLT_OK RESET \
	<< std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &origin)
{
	ClapTrap::operator=(origin);
	this->_name = origin._name;
	this->_hit_points = origin._hit_points;
	this->_energy_points = origin._energy_points;
	this->_attack_damage = origin._attack_damage;
	this->gateKeeperMode = origin.gateKeeperMode;
	return (*this);
}

void ScavTrap::guardGate()
{
	if (this->_hit_points == 0)
	{
		std::cout << std::endl << this->_name << RED DEATH1 RESET << std::endl;
		return ;
	}
	if (this->_energy_points == 0 && this->gateKeeperMode == false)
	{
		std::cout << std::endl << this->_name << RED WT1_EP RESET << std::endl;
		return ;
	}
	if (this->gateKeeperMode == false)
	{
		std::cout << std::endl << this->_name << WHITE GKM_TR RESET << \
		std::endl;
		this->gateKeeperMode = true;
	}
	else
	{
		std::cout << std::endl << this->_name << WHITE GKM_EXTR RESET << \
		std::endl;
		this->gateKeeperMode = false;
	}
}

void ScavTrap::attack(const std::string& target)
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
	if (this->gateKeeperMode == false)
	{
		std::cout << std::endl << this->_name << ORANGE GKM_FLS RESET << \
		std::endl;
		return ;
	}
	std::cout << std::endl << GREEN APP2_NAME RESET << this->_name << YELLOW \
	ATTACK RESET << target << YELLOW CAU RESET <<  this->_attack_damage <<  \
	YELLOW PT_DMG RESET << std::endl;
	this->_energy_points -= 1;
}

void	ScavTrap::getEnergyPoints(void)
{
	std::cout << YELLOW GET_EP RESET << this->_energy_points << std::endl;
}

void	ScavTrap::getHitPoints(void)
{
	std::cout << std::endl << YELLOW GET_HP RESET << this->_hit_points << std::endl;
}

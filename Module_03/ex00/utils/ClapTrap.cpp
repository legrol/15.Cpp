/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-24 11:49:40 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-02-24 11:49:40 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

/**
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */

ClapTrap::ClapTrap(void): _name("anonymus"), _hit_points(10), \
_energy_points(10), _attack_damage(0)
{
	std::cout << CYAN XXX RESET << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << CYAN XXX RESET << std::endl;
}


void ClapTrap::attack(const std::string& target)
{



}

void ClapTrap::takeDamage(unsigned int amount)
{



}

void ClapTrap::beRepaired(unsigned int amount)
{




}
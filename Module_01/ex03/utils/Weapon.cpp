/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 16:49:27 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/16 20:23:43 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

/**
 * Constructor for the `Weapon` class.
 * Initializes a `Weapon` object and sets its type using the provided string.
 * 
 * @param std::string type   The type of the weapon (e.g., "Sword", "Gun").
 * 
 * @return void              No return value.
 * 
 * 
 * Destructor for the `Weapon` class.
 * Cleans up resources associated with the `Weapon` object.
 * 
 * @return void              No return value.
 * 
 * 
 * The function "getType" retrieves the type of the weapon.
 * 
 * @return std::string const&   A constant reference to the string containing 
 *                              the weapon's type.
 * 
 * Example:
 * "Sword", "Gun", "Bow", etc.
 * 
 * 
 * The function "setType" sets or updates the type of the weapon.
 * 
 * @param std::string type   The new type for the weapon (e.g., "Axe", 
 * 								"Dagger").
 * 
 * @return void              No return value.
 * 
 */

Weapon::Weapon(std::string type)
{
	this->setType(type);
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string const	&Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

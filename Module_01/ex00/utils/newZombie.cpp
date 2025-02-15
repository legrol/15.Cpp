/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:02:50 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/14 23:13:06 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/**
 * The function "newZombie" dynamically allocates a new Zombie instance, 
 * sets its name, and returns a pointer to it.
 * 
 * @param std::string name     	The name to assign to the newly created Zombie 
 * 								instance.
 * 
 * @return Zombie*             	A pointer to the newly created Zombie instance.
 *                              The caller is responsible for managing the 
 * 								memory of the returned Zombie instance.
 * 
 */

Zombie* newZombie(std::string name)
{
	Zombie *newZb;

	newZb = new Zombie();
	newZb->setName(name);
	return (newZb);
}

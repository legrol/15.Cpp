/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-10 15:03:02 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-02-10 15:03:02 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/**
 * The function "randomChump" creates a new Zombie instance, sets its name, 
 * and makes it announce itself.
 * 
 * @param std::string name     The name to assign to the Zombie instance.
 * 
 * @return void                No return value. The function performs actions 
 *                             directly on the created Zombie instance. 
 * 
 */

 void	randomChump(std::string name)
{
	Zombie new_zombie;

	new_zombie.setName(name);
	new_zombie.announce();
}

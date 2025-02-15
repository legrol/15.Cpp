/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:46:27 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/14 23:36:22 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/**
 * The default constructor for the "Zombie" class initializes a Zombie 
 * instance.
 * 
 * @return void                 No return value. Creates a Zombie object with 
 * 								default values.
 * 
 * 
 * The destructor for the "Zombie" class outputs a message indicating the 
 * Zombie's destruction.
 * 
 * @return void                 No return value. Cleans up the Zombie instance.
 * 
 * 
 * The function "announce" outputs the Zombie's name along with a message.
 * 
 * @return void                 No return value. Displays the Zombie's 
 * 								announcement.
 * 
 * 
 * The function "setName" assigns a name to the Zombie instance.
 * 
 * @param std::string name      The name to be assigned to the Zombie instance.
 * 
 * @return void                 No return value. Updates the Zombie's name.
 *  
 * 
 */

Zombie::Zombie(void)
{
	
}

Zombie::~Zombie(void)
{
	std::cout << this->name << DESTROYED << std::endl << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

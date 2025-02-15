/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:46:27 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/15 21:56:39 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/**
 * The static member variable `Zombie::count` keeps track of the total number 
 * of zombies created or destroyed during the program's execution. It is 
 * incremented when a zombie is constructed and decremented when a zombie 
 * is destroyed.
 * 
 * 
 * The constructor `Zombie::Zombie(std::string name)` initializes a `Zombie` 
 * object with a given name. It also increments the static `count` variable 
 * to keep track of the number of zombies and prints a message indicating 
 * the creation of the zombie.
 * 
 * @param std::string name          The name of the zombie to be created.
 * 
 * @return void                     No return value.
 * 
 * 
 * 
 * The default constructor `Zombie::Zombie()` initializes a `Zombie` object 
 * with a default name "ANONYMUS". It increments the static `count` variable 
 * and prints a message indicating the creation of the zombie.
 * 
 * @return void                     No return value.
 * 
 * 
 * 
 * The destructor `Zombie::~Zombie()` is called when a `Zombie` object is 
 * destroyed. It decrements the static `count` variable and prints a message 
 * indicating the destruction of the zombie.
 * 
 * @return void                     No return value.
 * 
 * 
 * 
 * The function `Zombie::announce` prints a message announcing the zombie 
 * along with its signature sound.
 * 
 * @return void                     No return value.
 * 
 * 
 * 
 * The function `Zombie::setName` assigns a name to the zombie object.
 * 
 * @param std::string name          The name to be assigned to the zombie.
 * 
 * @return void                     No return value.
 * 
 * 
 * 
 * The function `Zombie::getName` retrieves the name of the zombie object.
 * 
 * @return const std::string&       Returns a reference to the zombie's name.
 * 
 */

int Zombie::count = 1;

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << IMG_ZB << WHITE << count++ << DEGREE ZB RESET YELLOW << \
	this->getName() << RESET CREATED2 << std::endl;
}

Zombie::Zombie(void)
{
	this->name = "ANONYMUS";
	std::cout << IMG_ZB << WHITE << count++ << DEGREE ZB RESET YELLOW << \
	this->getName() << RESET CREATED << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << WHITE << --count << DEGREE ZB RESET YELLOW << \
	this->getName() << RESET ZB_DEAD << std::endl;	
}

void	Zombie::announce(void) const
{
	std::cout << YELLOW << this->getName() << RESET CYAN BRAIN RESET << \
	IMG_GR_ZB << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

const std::string& Zombie::getName(void) const
{
	return (this->name);
}

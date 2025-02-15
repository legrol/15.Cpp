/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 23:30:52 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/15 21:57:37 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/**
 * The function `zombieHorde` creates an array (horde) of `N` zombies, each 
 * with the specified name. It dynamically allocates memory for the zombie 
 * array and sets the name of each zombie in the horde.
 * 
 * @param int N                     The number of zombies to be created in 
 *                                  the horde.
 * @param std::string name          The name to be assigned to each zombie 
 *                                  in the horde.
 * 
 * @return Zombie*                  Returns a pointer to the dynamically 
 *                                  allocated array of zombies.
 * 
 * @note                            The caller is responsible for freeing 
 *                                  the memory allocated for the zombie horde 
 *                                  using `delete[]` to avoid memory leaks.
 * 
 */

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *horde;

	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}

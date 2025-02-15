/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:46:46 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/15 01:03:16 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

// ============================================================================
// Libraries
// ============================================================================
# include <iostream>			// std::cout, std::endl, ...
# include <string>				// std::string
# include <iomanip>				// std::setw, std::left, ...
# include <cstdlib>				// use to EXIT_FAILURE, EXIT_SUCCESS...

// ============================================================================
// Access to my libraries
// ============================================================================
# include "colors.hpp"
# include "macros.hpp"

class Zombie
{
	private:

		std::string	name;

	public:

		Zombie(void);
		~Zombie(void);
			
		void	announce(void) const;
		void	setName(std::string name);		
};

void	print_banner(void);
void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif
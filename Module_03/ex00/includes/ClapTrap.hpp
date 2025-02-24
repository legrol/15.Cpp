/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-24 11:48:07 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-02-24 11:48:07 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

// ============================================================================
// Libraries
// ============================================================================
# include <iostream>			// std::cout, std::endl, ...
# include <string>				// std::string
# include <cstdlib>				// use to EXIT_FAILURE, EXIT_SUCCESS...

// ============================================================================
// Access to my libraries
// ============================================================================
#include "macros.hpp"
#include "colors.hpp"

class ClapTrap
{
	private:

		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;

	public:

		ClapTrap(void);
		ClapTrap(const ClapTrap& copy);
		ClapTrap(const std::string& name);
		ClapTrap &operator=(const ClapTrap &origin);
		~ClapTrap(void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

// ============================================================================
// Functions
// ============================================================================
void			print_banner();

#endif
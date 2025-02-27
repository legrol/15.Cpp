/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:33:40 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/27 21:03:27 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	private:

		bool gateKeeperMode;

	public:

		ScavTrap(void);
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& copy);
		~ScavTrap(void);
		ScavTrap &operator=(const ScavTrap &origin);
	
		void guardGate();
		void attack(const std::string& target);
		void getEnergyPoints(void);
		void getHitPoints(void);
};

#endif

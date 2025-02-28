/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:33:40 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/28 20:06:31 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

	protected:

		bool gateKeeperMode;

	public:

		ScavTrap(void);
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& copy);
		~ScavTrap(void);
		ScavTrap &operator=(const ScavTrap &origin);
	
		void guardGate();
		void attack(const std::string& target);
		int getEnergyPoints(void);		
		int getHitPoints(void);
		int getAttackDamage(void);
};

#endif

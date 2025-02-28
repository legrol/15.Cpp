/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 23:13:38 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/28 23:27:56 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:

		std::string	_name;

	public:

		DiamondTrap();
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& copy);
		~DiamondTrap(void);

		DiamondTrap &operator=(const DiamondTrap &origin);

		void whoAmI(void);	
};

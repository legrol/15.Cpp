/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 22:07:27 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/28 23:27:48 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:


	public:

		FragTrap(void);
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& copy);
		~FragTrap(void);
	
		FragTrap &operator=(const FragTrap &origin);

		void highFivesGuys(void);
		int getHitPoints(void);
		int getAttackDamage(void);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 22:07:27 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/27 23:00:05 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:


	public:

		FragTrap(void);
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& copy);
		~FragTrap(void);
	
		FragTrap &operator=(const FragTrap &origin);

		void highFivesGuys(void);
		void attack(const std::string& target);
		void getEnergyPoints(void);
		void getHitPoints(void);

	};

#endif
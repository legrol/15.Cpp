/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 16:55:37 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/16 19:39:50 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define	HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:

		std::string		_name;
		Weapon			*_weapon;

	public:

		HumanB(std::string name);
		~HumanB(void);
		
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif
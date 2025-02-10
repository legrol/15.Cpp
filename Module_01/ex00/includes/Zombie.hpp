/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-10 12:46:46 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-02-10 12:46:46 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# include "colors.hpp"
# include "macros.hpp"

class Zombie
{
	private:

		std::string	name;

	public:

		Zombie(void);
		~Zombie(void);
	
		void	announce(void);
		Zombie	*newZombie(std::string name);
		void	randomChump(std::string name);
		void	print_banner(void);
};

#endif
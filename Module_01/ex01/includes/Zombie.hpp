/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:46:46 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/15 23:27:45 by rdel-olm         ###   ########.fr       */
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
# include <sstream>				// std::istringstream
# include <cctype>				// std::isdigit

// ============================================================================
// Access to my libraries
// ============================================================================
# include "colors.hpp"
# include "macros.hpp"

class Zombie
{
	private:

		std::string	name;
		static int	count;

	public:

		Zombie(void);
		~Zombie(void);
		
		Zombie( std::string name );
		void	announce(void) const;
		void	setName(std::string name);
		const	std::string& getName(void) const;
};

void	print_banner(void);
Zombie*	zombieHorde(int N, std::string name);

#endif
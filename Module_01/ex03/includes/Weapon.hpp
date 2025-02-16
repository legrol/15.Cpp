/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 16:43:06 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/16 21:38:31 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define	WEAPON_HPP

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

class Weapon
{
	private:

		std::string			_type;

	public:

		Weapon(std::string type);
		~Weapon(void);
		
		std::string const	&getType(void);
		void				setType(std::string type);	
};

void	print_banner(void);

# endif

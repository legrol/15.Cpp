/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-18 08:51:13 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-02-18 08:51:13 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

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

class Harl
{
	private:

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		
		// Harl(std::string xxx);
		Harl(void);
		~Harl(void);

		void complain(std::string level);

};


// ============================================================================
// Functions
// ============================================================================
void	print_banner();

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:32:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/19 23:08:11 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

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

class Fixed
{
	private:

		int					nbr_value_fixed_point;
		static const int	nbr_fractional_bits;

	public:
		
		Fixed(void);
		Fixed(const Fixed& copy);
		Fixed &operator=(const Fixed &origin);
		~Fixed(void);
		
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
};

// ============================================================================
// Functions
// ============================================================================
void	print_banner();

#endif
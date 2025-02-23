/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:32:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/23 00:12:19 by rdel-olm         ###   ########.fr       */
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
# include <cmath>				// roundf

// ============================================================================
// Access to my libraries
// ============================================================================
#include "macros.hpp"
#include "colors.hpp"

class Fixed
{
	private:

		int					nbr_value_fixed_point;
		static const int	nbr_fractional_bits = 8;

	public:
		
		// Constructors
		Fixed(void);		
		Fixed(const int intToFixedPoint);
		Fixed(const float floatToFixedPoint);
		Fixed(const Fixed& copy);

		// Destructors
		~Fixed(void);

		// Overload Comparison Operators
		bool operator>(Fixed nbr) const;
		bool operator<(Fixed nbr) const;
		bool operator>=(Fixed nbr) const;
		bool operator<=(Fixed nbr) const;
		bool operator==(Fixed nbr) const;
		bool operator!=(Fixed nbr) const;

		// Overload Arithmetics Operators
		Fixed operator+(Fixed nbr) const;
		Fixed operator-(Fixed nbr) const;
		Fixed operator*(Fixed nbr) const;
		Fixed operator/(Fixed nbr) const;

		// Overload Increment/Decrement Operators
		Fixed operator++(void);
		Fixed operator++(int);
		Fixed operator--(void);
		Fixed operator--(int);

		// Overload functions max and min
		static Fixed &min(Fixed &first_nbr, Fixed &second_nbr);
		static const Fixed &min(Fixed const &first_nbr, Fixed const \
		&second_nbr);
		static Fixed &max(Fixed &first_nbr, Fixed &second_nbr);
		static const Fixed &max(Fixed const &first_nbr, Fixed const \
		&second_nbr);

		// Converters
		int					toInt(void) const;
		float				toFloat(void) const;

		// Getters & Setters
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
};

// ============================================================================
// Functions
// ============================================================================
void			print_banner();
std::ostream 	&operator<<(std::ostream &stream, const Fixed &nbr);

#endif
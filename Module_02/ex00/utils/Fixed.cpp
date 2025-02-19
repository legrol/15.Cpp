/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:34:46 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/19 23:08:03 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/**
 * The static member `nbr_fractional_bits` defines the number of fractional 
 * bits used for fixed-point representation.
 * 
 * 
 * The constructor `Fixed` initializes a `Fixed` object with a default value 
 * of 0.
 * It also outputs a message indicating default initialization.
 * 
 * 
 * The copy constructor `Fixed` creates a new `Fixed` object as a copy of 
 * another.
 * It assigns the values from the source object using the assignment operator.
 * 
 * @param const Fixed& copy  	The `Fixed` object to be copied.
 * 
 * 
 * The copy assignment operator assigns the values from one `Fixed` object 
 * to another.
 * It ensures self-assignment is avoided and assigns the raw bit value.
 * 
 * @param const Fixed& origin   The `Fixed` object to copy from.
 * 
 * @return Fixed&            	Returns a reference to the current object.
 *
 * 
 * The destructor `~Fixed` is called when a `Fixed` object is destroyed.
 * It outputs a message indicating object destruction.
 * 
 * 
 * The function `getRawBits` retrieves the raw integer value stored in the 
 * object.
 * It prints a message when called.
 * 
 * @return int     				The raw integer representation of the 
 * 								fixed-point value.
 * 
 * 
 * The function `setRawBits` sets the raw integer value of the `Fixed` object.
 * It prints a message when called.
 * 
 * @param int raw  				The new raw integer value to assign.
 * 
 */

const int	Fixed::nbr_fractional_bits = 8;

Fixed::Fixed(void)
{
	nbr_value_fixed_point = 0;
	std::cout << CYAN INIT_DFT RESET << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << BLUE INIT_CPY RESET << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &origin)
{
	std::cout << GREEN OPRT_CPY RESET << std::endl;
	if (this != &origin)
		this->nbr_value_fixed_point = origin.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << ORANGE DESTR RESET << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << MAGENTA FT_GRB RESET << std::endl;
	return this->nbr_value_fixed_point;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << YELLOW FT_SRB RESET << std::endl;
	this->nbr_value_fixed_point = raw;
}

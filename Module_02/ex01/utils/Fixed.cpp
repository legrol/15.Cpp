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
 * 
 * 
 * 
 * 
 * 
 * 
 *  
 */

Fixed::Fixed(void): nbr_value_fixed_point(0)
{
	std::cout << CYAN INIT_DFT RESET << std::endl;
}

Fixed::Fixed(const int intToFixedPoint)
{
	this->nbr_value_fixed_point = (intToFixedPoint * (1 << \
		Fixed::nbr_fractional_bits));
	std::cout << WHITE INT_CTR RESET << std::endl;
}

Fixed::Fixed(const float floatToFixedPoint)
{
	this->nbr_value_fixed_point = roundf(floatToFixedPoint * (1 << \
		Fixed::nbr_fractional_bits));
	std::cout << WHITE FLT_CTR RESET << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << BLUE INIT_CPY RESET << std::endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	std::cout << ORANGE DESTR RESET << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &origin)
{
	std::cout << GREEN OPRT_CPY RESET << std::endl;
	// if (this != &origin)
	// 	this->nbr_value_fixed_point = origin.getRawBits();
	this->setRawBits(origin.getRawBits());
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return this->nbr_value_fixed_point;
}

void	Fixed::setRawBits(int const raw)
{
	this->nbr_value_fixed_point = raw;
}

int	Fixed::toInt(void) const
{
	return this->nbr_value_fixed_point >> Fixed::nbr_fractional_bits;
}

float	Fixed::toFloat(void) const
{
	return (float)this->nbr_value_fixed_point \
	/ (float)(1 << Fixed::nbr_fractional_bits);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &nbr)
{
	stream << nbr.toFloat();
	return stream;
}

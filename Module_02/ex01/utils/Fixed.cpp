/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:34:46 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/21 23:03:27 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/**
 * The `Fixed` class represents a fixed-point number with fractional bits.
 * It provides constructors for initialization, conversion operators, and 
 * overloaded operators for assignment and output streaming.
 * 
 * 
 * Fixed::Fixed(void)		Default constructor for the `Fixed` class.
 * 							Initializes the fixed-point value to zero.
 * 
 * 
 * Fixed::Fixed(const int intToFixedPoint) is the Constructor that initializes 
 * a `Fixed` object from an integer.The integer is converted to fixed-point 
 * representation by shifting left based on the number of fractional bits.
 * 
 * @param intToFixedPoint  	Integer value to be converted.
 * 
 * 
 * Fixed::Fixed(const float floatToFixedPoint) is the Constructor that 
 * initializes a `Fixed` object from a floating-point number.The float is 
 * converted to fixed-point representation by multiplying and rounding.
 * 
 * @param floatToFixedPoint  Floating-point value to be converted.
 * 
 * 
 * Fixed::Fixed(const Fixed& copy) is the Copy constructor for the `Fixed` 
 * class. Creates a new `Fixed` object as a copy of an existing one.
 * 
 * @param copy  			Reference to the `Fixed` object to be copied.
 * 
 * 
 * Fixed::~Fixed(void)		Destructor for the `Fixed` class.
 * 							Prints a message indicating object destruction.
 * 
 * 
 * Fixed	&Fixed::operator=(const Fixed &origin) is the Overloaded assignment
 * operator for the `Fixed` class. Copies the value of another `Fixed` object.
 * 
 * @param origin  			Reference to the `Fixed` object to be assigned.
 * 
 * @return 					Reference to the assigned `Fixed` object.
 * 
 * 
 * int	Fixed::getRawBits(void) const  Retrieves the raw fixed-point value.
 * 
 * @return 					Integer representing the fixed-point value.
 * 
 * 
 * void	Fixed::setRawBits(int const raw) Sets the raw fixed-point value.
 * 
 * @param raw  				The integer value to be set.
 * 
 * 
 * int	Fixed::toInt(void) const  Converts the fixed-point value to an integer 
 * by shifting right.
 * 
 * @return 					Integer representation of the fixed-point value.
 * 
 * 
 * float	Fixed::toFloat(void) const  Converts the fixed-point value to a 
 * floating-point number.
 * 
 * @return 					Float representation of the fixed-point value.
 * 
 * 
 * std::ostream &operator<<(std::ostream &stream, const Fixed &nbr) is the 
 * Overloaded `operator<<` to output a `Fixed` object as a floating-point 
 * value.
 * 
 * @param stream  			Output stream.
 * @param nbr     			`Fixed` object to be printed.
 * 
 * @return 					The modified output stream.
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:34:46 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/22 20:47:08 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/**
 * The default constructor `Fixed::Fixed(void)` initializes a `Fixed` object
 * with a value of zero.
 * 
 * 
 * The constructor `Fixed::Fixed(const int intToFixedPoint)` converts an 
 * integer to a fixed-point representation.
 *
 * @param intToFixedPoint  		Integer value to be converted.
 * 
 * 
 * The constructor `Fixed::Fixed(const float floatToFixedPoint)` converts a 
 * floating-point number to a fixed-point representation.
 *
 * @param floatToFixedPoint  	Float value to be converted.
 * 
 * 
 * The copy constructor `Fixed::Fixed(const Fixed& copy)` creates a new `Fixed`
 * object as a copy of an existing one.
 *
 * @param copy  				Reference to the `Fixed` object to be copied.
 * 
 * 
 * The destructor `Fixed::~Fixed(void)` cleans up a `Fixed` object.
 * 
 * 
 * Converts the fixed-point value to an integer.
 *
 * @return int  				The integer representation of the fixed-point 
 * 								value.
 * 
 * 
 * Converts the fixed-point value to a floating-point number.
 *
 * @return float  				The floating-point representation of the 
 * 								fixed-point value.
 * 
 * 
 * Retrieves the raw integer value of the fixed-point number.
 *
 * @return int  				The raw fixed-point value.
 * 
 * 
 * Sets the raw integer value of the fixed-point number.
 *
 * @param raw  					The new raw fixed-point value.
 * 
 * 
 * Overloaded stream insertion operator for printing a `Fixed` object.
 *
 * @param stream  				Output stream.
 * @param nbr     				`Fixed` object to print.
 * @return std::ostream&  		Reference to the modified stream.
 * 
 * 
 * Overloaded greater than operator.
 *
 * @param nbr  					`Fixed` object to compare.
 * @return bool  				`true` if this object is greater than 
 * 								`nbr`, otherwise `false`.
 * 
 * Overloaded less than operator.
 *
 * @param nbr  					`Fixed` object to compare.
 * @return bool  				`true` if this object is less than `nbr`, 
 * 								otherwise `false`.
 * 
 * 
 * Overloaded greater than or equal to operator.
 *
 * @param nbr  					`Fixed` object to compare.
 * @return bool  				`true` if this object is greater than or 
 * 								equal to `nbr`.
 * 
 * 
 * Overloaded less than or equal to operator.
 *
 * @param nbr  					`Fixed` object to compare.
 * @return bool  				`true` if this object is less than or equal 
 * 								to `nbr`.
 * 
 * 
 * Overloaded equality operator.
 *
 * @param nbr  					`Fixed` object to compare.
 * @return bool  				`true` if this object is equal to `nbr`, 
 * 								otherwise `false`.
 * 
 * 
 * Overloaded inequality operator.
 *
 * @param nbr  					`Fixed` object to compare.
 * @return bool  				`true` if this object is not equal to `nbr`, 
 * 								otherwise `false`.
 * 
 * 
 * Overloaded addition operator.
 *
 * @param nbr  					`Fixed` object to add.
 * @return Fixed  				The result of the addition.
 * 
 * 
 * Overloaded subtraction operator.
 *
 * @param nbr  					`Fixed` object to subtract.
 * @return Fixed  				The result of the subtraction.
 * 
 * 
 * Overloaded multiplication operator.
 *
 * @param nbr  					`Fixed` object to multiply.
 * @return Fixed  				The result of the multiplication.
 * 
 * 
 * Overloaded division operator.
 *
 * @param nbr  					`Fixed` object to divide.
 * @return Fixed  				The result of the division.
 * 
 * 
 * Overloaded pre-increment operator.
 *
 * @return Fixed&  				Reference to the incremented object.
 * 
 * 
 * Overloaded post-increment operator.
 *
 * @return Fixed  				Copy of the object before incrementing.
 * 
 * 
 * Overloaded pre-decrement operator.
 *
 * @return Fixed&  				Reference to the decremented object.
 * 
 * 
 * Overloaded post-decrement operator.
 *
 * @return Fixed  				Copy of the object before decrementing.
 * 
 * 
 * Finds the minimum of two `Fixed` objects (non-const).
 *
 * @param first_nbr  			First `Fixed` object.
 * @param second_nbr 			Second `Fixed` object.
 * @return Fixed&  				Reference to the smaller value.
 * 
 * 
 * Finds the minimum of two `Fixed` objects (const version).
 *
 * @param first_nbr  			First `Fixed` object.
 * @param second_nbr 			Second `Fixed` object.
 * @return const Fixed&  		Reference to the smaller value.
 * 
 * 
 * Finds the maximum of two `Fixed` objects (non-const).
 *
 * @param first_nbr  			First `Fixed` object.
 * @param second_nbr 			Second `Fixed` object.
 * @return Fixed&  				Reference to the larger value.
 * 
 * 
 * Finds the maximum of two `Fixed` objects (const version).
 *
 * @param first_nbr  			First `Fixed` object.
 * @param second_nbr 			Second `Fixed` object.
 * @return const Fixed&  		Reference to the larger value.
 * 
 */

Fixed::Fixed(void): nbr_value_fixed_point(0)
{

}

Fixed::Fixed(const int intToFixedPoint)
{
	this->nbr_value_fixed_point = intToFixedPoint << this->nbr_fractional_bits;
}

Fixed::Fixed(const float floatToFixedPoint)
{
	this->nbr_value_fixed_point = roundf(floatToFixedPoint * (1 << \
	this->nbr_fractional_bits));
}

Fixed::Fixed(const Fixed& copy)
{

	*this = copy;
}

Fixed::~Fixed(void)
{

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

int	Fixed::getRawBits(void) const
{
	return this->nbr_value_fixed_point;
}

void	Fixed::setRawBits(int const raw)
{
	this->nbr_value_fixed_point = raw;
}

std::ostream &operator<<(std::ostream &stream, const Fixed &nbr)
{
	stream << nbr.toFloat();
	return (stream);
}

bool	Fixed::operator>(Fixed nbr) const
{
	return (this->toFloat() > nbr.toFloat());
}

bool	Fixed::operator<(Fixed nbr) const
{
	return (this->toFloat() < nbr.toFloat());
}

bool	Fixed::operator>=(Fixed nbr) const
{
	return (this->toFloat() >= nbr.toFloat());
}

bool	Fixed::operator<=(Fixed nbr) const
{
	return (this->toFloat() <= nbr.toFloat());	
}

bool	Fixed::operator==(Fixed nbr) const
{
	return (this->toFloat() == nbr.toFloat());	
}

bool	Fixed::operator!=(Fixed nbr) const
{
	return (this->toFloat() != nbr.toFloat());	
}

Fixed Fixed::operator+(Fixed nbr) const
{
	Fixed addition;

	addition.setRawBits(this->getRawBits() + nbr.getRawBits());
	return (addition);
}

Fixed Fixed::operator-(Fixed nbr) const
{
	Fixed subtraction;

	subtraction.setRawBits(this->getRawBits() - nbr.getRawBits());
	return (subtraction);	
}

Fixed Fixed::operator*(Fixed nbr) const
{
	Fixed product;

	product.setRawBits(this->getRawBits() * nbr.getRawBits());
	product.setRawBits(product.getRawBits() >> this->nbr_fractional_bits);
	return (product);	
}

Fixed Fixed::operator/(Fixed nbr) const
{
	Fixed division;

	division.setRawBits(this->getRawBits() << this->nbr_fractional_bits \
	/ nbr.getRawBits());
	division.setRawBits(division.getRawBits());
	return (division);	
}

Fixed Fixed::operator++(void)
{
	this->nbr_value_fixed_point++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	operator++();
	return (temp);
}

Fixed Fixed::operator--(void)
{
	this->nbr_value_fixed_point--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);

	operator--();
	return (temp);
}

Fixed &Fixed::min(Fixed &first_nbr, Fixed &second_nbr)
{
	if (first_nbr.toFloat() <= second_nbr.toFloat())
		return (first_nbr);
	else
		return (second_nbr);
}
	
const Fixed &Fixed::min(Fixed const &first_nbr, Fixed const &second_nbr)
{
	if (first_nbr.toFloat() <= second_nbr.toFloat())
		return (first_nbr);
	else
		return (second_nbr);
}

Fixed &Fixed::max(Fixed &first_nbr, Fixed &second_nbr)
{
	if (first_nbr.toFloat() <= second_nbr.toFloat())
		return (second_nbr);
	else
		return (first_nbr);
}

const Fixed &Fixed::max(Fixed const &first_nbr, Fixed const &second_nbr)
{
	if (first_nbr.toFloat() <= second_nbr.toFloat())
		return (second_nbr);
	else
		return (first_nbr);
}

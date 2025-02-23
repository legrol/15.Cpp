/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:51:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/23 01:05:48 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

/**
 * The constructor `Point::Point(void)` initializes a `Point` object
 * with default values (0,0).
 * 
 * 
 * The constructor `Point::Point(Fixed const nbr1, Fixed const nbr2)` 
 * initializes a `Point` object with the given `Fixed` values.
 *
 * @param nbr1  			The x-coordinate of the point.
 * @param nbr2  			The y-coordinate of the point.
 * 
 * 
 * The copy constructor `Point::Point(const Point& copy)` initializes
 * a `Point` object by copying another `Point` object.
 *
 * @param copy  			The `Point` object to copy from.
 * 
 * 
 * The assignment operator `Point::operator=` assigns the values
 * of one `Point` object to another.
 *
 * @param origin  			The `Point` object to copy from.
 * 
 * @return Point&  			Returns a reference to the assigned `Point` object.
 * 
 * 
 * The destructor `Point::~Point(void)` destroys the `Point` object.
 * 
 * 
 * The function `operator<<` overloads the stream insertion operator
 * to print a `Point` object.
 *
 * @param stream  			The output stream.
 * @param point   			The `Point` object to print.
 * 
 * @return std::ostream&  	Returns the output stream.
 * 
 * 
 * The function `Point::getX` returns the x-coordinate of the `Point` object.
 *
 * @return const Fixed&  	Reference to the x-coordinate value.
 * 
 * 
 * The function `Point::getY` returns the y-coordinate of the `Point` object.
 *
 * @return const Fixed&  	Reference to the y-coordinate value.
 * 
 * 
 */

Point::Point(void): _x(0), _y(0)
{

}

Point::Point(Fixed const nbr1, Fixed const nbr2): _x(nbr1), _y(nbr2)
{


}

Point::Point(const Point& copy): _x(copy._x), _y(copy._y)
{
	*this = copy;	
}

Point	&Point::operator=(const Point &origin)
{
	if (this != &origin)
		return (*this);
	return (*this);
}

Point::~Point(void)
{


}

std::ostream &operator<<(std::ostream &stream, const Point &point)
{
	stream << CYAN PT_X RESET << point.getX() << CYAN PT_Y RESET << \
	point.getY() << std::endl;
	return (stream);
}

const Fixed &Point::getX(void)const
{
	return (this->_x);
}

const Fixed &Point::getY(void)const
{
	return (this->_y);
}

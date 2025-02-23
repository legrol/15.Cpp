/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:51:01 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/23 01:07:00 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

/**
 * The function `get_area` calculates the absolute area of a triangle 
 * formed by three given `Point` objects using the determinant formula.
 *
 * @param a  			The first vertex of the triangle.
 * @param b 			The second vertex of the triangle.
 * @param c  			The third vertex of the triangle.
 *
 * @return Fixed  		The absolute area of the triangle.
 * 
 * 
 * The function `bsp` (Binary Space Partitioning) determines whether a 
 * given point lies inside a triangle formed by three given vertices.
 *
 * @param a      		The first vertex of the triangle.
 * @param b      		The second vertex of the triangle.
 * @param c      		The third vertex of the triangle.
 * @param point  		The point to check.
 *
 * @return bool  		Returns `true` if the point is inside the triangle, 
 *               		otherwise returns `false`.
 * 
 */

static Fixed   get_area(Point const a, Point const b, Point const c)
{
	Fixed area = ((a.getX() * (b.getY() - c.getY()) \
				+ (b.getX() * (c.getY() - a.getY())) \
				+ (c.getX() * (a.getY() - b.getY())))) / 2;
	if (area < 0)
		area = area * -1;
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed area = get_area(a, b, c);
	Fixed d1 = get_area(point, a, b);
	Fixed d2 = get_area(point, b, c);
	Fixed d3 = get_area(point, c, a);
	bool result = false;

	if (area == (d1 + d2 + d3))
		result = true;
	if (d1 == 0 || d2 == 0 || d3 == 0)
		result = false;

	return (result);
}
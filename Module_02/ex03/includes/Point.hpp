/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:47:45 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/23 00:06:42 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:

		Fixed const		_x;
		Fixed const		_y;

	public:

		Point(void);
		Point(Fixed const nbr1, Fixed const nbr2);
		Point(const Point& copy);
		Point	&operator=(const Point &origin);
		~Point(void);

		const Fixed &getX(void)const;
		const Fixed &getY(void)const;	
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
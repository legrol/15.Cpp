/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 09:21:21 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/23 22:19:48 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

/**
 * The function `main` initializes and tests the `bsp` function by defining
 * several points and checking if a given point is inside a triangle.
 *
 * @return int  Returns EXIT_SUCCESS upon successful execution.
 * 
 */

int	main(void)
{
	print_banner();

	const Point a(0, 0);
	const Point b(8, 0);
	const Point c(0, 8);
	const Point point(3, 3);

	std::cout << WHITE PTX RESET << point.getX() << WHITE PTY RESET << \
	point.getY() << WHITE INS RESET << std::endl << std::endl;
	std::cout << CYAN CH_A RESET << a.getX() << CYAN PTY RESET<< a.getY() \
	<< CYAN PC RESET << std::endl;
	std::cout << CYAN CH_B RESET << b.getX() << CYAN PTY RESET<< b.getY() \
	<< CYAN PC RESET << std::endl;
	std::cout << CYAN CH_C RESET << c.getX() << CYAN PTY RESET << c.getY() \
	<< CYAN PC RESET << std::endl;
	
	if (bsp(a, b, c, point) == true)
		std::cout << std::endl << GREEN OK RESET << std::endl;
	else
		std::cout << std::endl << RED NOK RESET << std::endl;

	std::cout << std::endl << YELLOW SPL RESET << std::endl << std::endl;

	Point d(6, 0);
	Point e(0, 6);
	Point f(0, 0);
	Point point2(9, 9);

	std::cout << WHITE PTX RESET << point2.getX() << WHITE PTY RESET << \
	point2.getY() << WHITE OUS RESET << std::endl << std::endl;
	std::cout << CYAN CH_D RESET << d.getX() << CYAN PTY RESET << d.getY() \
	<< CYAN PC RESET << std::endl;
	std::cout << CYAN CH_E RESET << e.getX() << CYAN PTY RESET << e.getY() \
	<< CYAN PC RESET << std::endl;
	std::cout << CYAN CH_F RESET << f.getX() << CYAN PTY RESET << f.getY() \
	<< CYAN PC RESET << std::endl;

	if (bsp(d, e, f, point2) == true)
		std::cout << std::endl << GREEN OK RESET << std::endl;
	else
		std::cout << std::endl << RED NOK RESET << std::endl;

	std::cout << std::endl;
	return (EXIT_SUCCESS);	
}

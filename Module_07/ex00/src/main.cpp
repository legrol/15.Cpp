/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-07 08:21:17 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-04-07 08:21:17 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Whatever.hpp"

/**
 * @brief int main(void)
 *
 * Entry point of the program.
 * Demonstrates the usage of template functions `swap`, `min`, and `max` with 
 * various data types,
 * including `int`, `std::string`, and `double`.
 *
 * For each data type:
 * - It prints initial values.
 * - Applies and displays the results of `min()` and `max()`.
 * - Swaps the variables using `swap()`.
 * - Displays updated values and re-applies `min()` and `max()` to show the 
 *   change.
 *
 * @return 							EXIT_SUCCESS after successful execution. 
 * 
 */

int main(void)
{
	print_banner();

	std::cout << WHITE TST1 RESET GREEN INT RESET << std::endl << std::endl;
	int a = 2;
	int b = 3;

	std::cout << YELLOW LETT_A RESET CYAN << a << RESET YELLOW CMM LETT_B \
	RESET CYAN << b << RESET << std::endl;
	std::cout << YELLOW MIN1 RESET CYAN << ::min( a, b ) << RESET << std::endl;
	std::cout << YELLOW MAX1 RESET CYAN << ::max( a, b ) << RESET << std::endl;

	std::cout << std::endl;
	std::cout << WHITE TST2 RESET GREEN SWP INT RESET << std::endl << std::endl;
	::swap( a, b );
	std::cout << YELLOW LETT_A RESET CYAN << a << RESET YELLOW CMM LETT_B \
	RESET CYAN << b << RESET << std::endl;
	std::cout << YELLOW MIN1 RESET CYAN << ::min( a, b ) << RESET << std::endl;
	std::cout << YELLOW MAX1 RESET CYAN << ::max( a, b ) << RESET << std::endl;




	std::cout << std::endl;
	std::cout << WHITE TST3 RESET GREEN CHRC RESET << std::endl << std::endl;
	std::string c = CH1;
	std::string d = CH2;

	std::cout << YELLOW LETT_C RESET CYAN << c << RESET YELLOW CMM LETT_D \
	RESET CYAN << d << RESET << std::endl;
	std::cout << YELLOW MIN2 RESET CYAN << ::min( c, d ) << RESET << std::endl;
	std::cout << YELLOW MAX2 RESET CYAN << ::max( c, d ) << RESET << std::endl;

	std::cout << std::endl;
	std::cout << WHITE TST4 RESET GREEN SWP CHRC RESET << std::endl;
	::swap(c, d);
	std::cout << std::endl;
	std::cout << YELLOW LETT_C RESET CYAN << c << RESET YELLOW CMM LETT_D \
	RESET CYAN << d << RESET << std::endl;
	std::cout << YELLOW MIN2 RESET CYAN << ::min( c, d ) << RESET << std::endl;
	std::cout << YELLOW MAX2 RESET CYAN << ::max( c, d ) << RESET << std::endl;

	std::cout << std::endl;
	std::cout << WHITE TST5 RESET GREEN CHRC ONMR RESET << std::endl \
	<< std::endl;
	std::string e = CH3;
	std::string f = CH4;

	std::cout << YELLOW LETT_E RESET CYAN << e << RESET YELLOW CMM LETT_F \
	RESET CYAN << f << RESET << std::endl;
	std::cout << YELLOW MIN3 RESET CYAN << ::min( e, f ) << RESET << std::endl;
	std::cout << YELLOW MAX3 RESET CYAN << ::max( e, f ) << RESET << std::endl;

	std::cout << std::endl;
	std::cout << WHITE TST6 RESET GREEN SWP CHRC ONMR RESET << std::endl;
	::swap(e, f);
	std::cout << std::endl;
	std::cout << YELLOW LETT_E RESET CYAN << e << RESET YELLOW CMM LETT_F \
	RESET CYAN << f << RESET << std::endl;
	std::cout << YELLOW MIN3 RESET CYAN << ::min( e, f ) << RESET << std::endl;
	std::cout << YELLOW MAX3 RESET CYAN << ::max( e, f ) << RESET << std::endl;




	std::cout << std::endl;
	std::cout << WHITE TST7 RESET GREEN DOUB RESET << std::endl \
	<< std::endl;
	double g = 4.2;
	double h = 42.0;

	std::cout << YELLOW LETT_G RESET CYAN << g << RESET YELLOW CMM LETT_H \
	RESET CYAN << h << RESET << std::endl;
	std::cout << YELLOW MIN4 RESET CYAN << ::min( g, h ) << RESET << std::endl;
	std::cout << YELLOW MAX4 RESET CYAN << ::max( g, h ) << RESET << std::endl;

	std::cout << std::endl;
	std::cout << WHITE TST8 RESET GREEN SWP DOUB RESET << std::endl;
	::swap(g, h);
	std::cout << std::endl;
	std::cout << YELLOW LETT_G RESET CYAN << g << RESET YELLOW CMM LETT_H \
	RESET CYAN << h << RESET << std::endl;
	std::cout << YELLOW MIN4 RESET CYAN << ::min( g, h ) << RESET << std::endl;
	std::cout << YELLOW MAX4 RESET CYAN << ::max( g, h ) << RESET << std::endl;




	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

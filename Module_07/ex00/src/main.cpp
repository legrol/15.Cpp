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
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */

int main(void)
{
	print_banner();

	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << YELLOW LETT_A RESET CYAN << a << RESET YELLOW CMM LETT_B \
	RESET CYAN << b << RESET << std::endl;
	std::cout << YELLOW MIN1 RESET CYAN << ::min( a, b ) << RESET << std::endl;
	std::cout << YELLOW MAX1 RESET CYAN << ::max( a, b ) << RESET << std::endl;

	std::string c = CH1;
	std::string d = CH2;

	::swap(c, d);
	std::cout << std::endl;
	std::cout << YELLOW LETT_C RESET CYAN << c << RESET YELLOW CMM LETT_D \
	RESET CYAN << d << RESET << std::endl;
	std::cout << YELLOW MIN2 RESET CYAN << ::min( c, d ) << RESET << std::endl;
	std::cout << YELLOW MAX2 RESET CYAN << ::max( c, d ) << RESET << std::endl;

	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

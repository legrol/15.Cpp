/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 09:21:21 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/22 20:35:23 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/**
 * The `main` function demonstrates the functionality of the `Fixed` class,
 * including arithmetic operations, increment operators, and the `max` 
 * function.
 * 
 * @return int  Returns `EXIT_SUCCESS` upon successful execution.
 * 
 */

int	main(void)
{
	print_banner();

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	
	std::cout << std::endl;
	return (EXIT_SUCCESS);	
}

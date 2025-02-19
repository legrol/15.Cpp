/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 09:21:21 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/19 23:01:38 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/**
 * The function `main` serves as the entry point for testing the `Fixed` class.
 * It demonstrates object instantiation, copy construction, and assignment.
 * 
 * @return int          Returns `EXIT_SUCCESS` upon successful execution.
 * 
 * Process:
 * - Creates an instance of `Fixed` named `a`.
 * - Uses the copy constructor to create `b` from `a`.
 * - Uses the assignment operator to copy `b` into `c`.
 * - Prints the raw bit values of `a`, `b`, and `c` to verify correct behavior.
 * 
 */

int	main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	return (EXIT_SUCCESS);	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:52:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/30 20:39:41 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

/**
 * @brief int main(int argc, char *argv[])
 *
 * Entry point of the program.
 * This function expects exactly one command-line argument representing the 
 * scalar value to convert.
 * It displays an error if the number of arguments is incorrect, otherwise it 
 * calls the conversion routine.
 *
 * @param argc 							Argument count.
 * @param argv 							Argument vector.
 * @return EXIT_SUCCESS 				if the conversion runs successfully, 
 * 										EXIT_FAILURE otherwise.
 * 
 */

int main(int argc, char *argv[])
{
	print_banner();

	(void)argc;
	if (argc != 2 || !argv[1][0])
	{
		std::cerr << RED INIT_ERR ARROW RESET YELLOW NUM_ARGV_ERR RESET \
		<< std::endl;
		std::cerr << WHITE SQOK RESET GREEN PATHOK RESET << std::endl;
		return (EXIT_FAILURE);
	}
	
	ScalarConverter::convert(argv[1]);

	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

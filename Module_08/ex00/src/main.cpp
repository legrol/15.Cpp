/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 01:08:18 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/16 01:08:21 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

/**
 * @brief int main()
 *
 * Entry point for testing the `easyfind` function with different STL 
 * containers.
 *
 * This function:
 * - Initializes a vector of integers, inserts predefined values, and tests 
 * 	 for existence of values using `easyfind`.
 * - Performs the same operations using a list of integers.
 * - Catches and handles any exceptions thrown by `easyfind` if the value is 
 *   not found.
 * - Displays styled output indicating whether the values were found or not.
 *
 * @return int 				Returns EXIT_SUCCESS when execution completes 
 * 							successfully.
 * 
 */

int main()
{
	print_banner();

	std::cout << YELLOW SPACES RESET << std::endl;
	std::cout << CYAN TSTVCT RESET << std::endl;
	std::cout << YELLOW SPACES RESET << std::endl;
	{
		std::vector<int> vct;

		vct.push_back(VAL1);
		vct.push_back(VAL2);
		vct.push_back(VAL3);
		vct.push_back(VAL4);
		vct.push_back(VAL5);

		try {
			if (easyfind(vct, VALSRC1))
				std::cout << CYAN VAL RESET GREEN << VALSRC1 << RESET YELLOW \
				VLOKVC RESET << std::endl;
		} catch (const std::exception &e) {
			std::cout << CYAN VAL RESET GREEN << VALSRC1 << RESET RED << \
			e.what() << RESET << std::endl;
		}

		try {
			if (easyfind(vct, VALSRC2))
			std::cout << CYAN VAL RESET GREEN << VALSRC2 << RESET YELLOW \
			VLOKVC RESET << std::endl;
		} catch (const std::exception &e) {
			std::cout << CYAN VAL RESET GREEN << VALSRC2 << RESET RED << \
			e.what() << RESET << std::endl;
		}

		std::cout << std::endl;
	}

	std::cout << YELLOW SPACES RESET << std::endl;
	std::cout << CYAN TSTLST RESET << std::endl;
	std::cout << YELLOW SPACES RESET << std::endl;
	{
		std::list<int> vct2;

		vct2.push_back(VAL1);
		vct2.push_back(VAL2);
		vct2.push_back(VAL3);
		vct2.push_back(VAL4);
		vct2.push_back(VAL5);

		try {
			if (easyfind(vct2, VALSRC3))
			std::cout << CYAN VAL RESET GREEN << VALSRC3 << RESET YELLOW \
			VLOKLS RESET << std::endl;
		} catch (const std::exception &e) {
			std::cout << CYAN VAL RESET GREEN << VALSRC3 << RESET RED << \
			e.what() << RESET << std::endl;
		}

		try {
			if (easyfind(vct2, VALSRC4))
			std::cout << CYAN VAL RESET GREEN << VALSRC4 << RESET YELLOW \
			VLOKLS RESET << std::endl;
		} catch (const std::exception &e) {
			std::cout << CYAN VAL RESET GREEN << VALSRC4 << RESET RED << \
			e.what() << RESET << std::endl;
		}

		std::cout << std::endl;
	}

	return (EXIT_SUCCESS);
}

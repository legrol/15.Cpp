/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 07:59:15 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/15 19:39:16 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

/**
 * @brief int main(int, char**)
 *
 * Entry point of the program that tests the functionality of the custom 
 * `Array` class.
 * 
 * - Creates an array of integers using a custom template `Array<int>` class.
 * - Also creates a raw C-style array `mirror` to validate deep copy integrity.
 * - Populates both arrays with the same random values.
 * - Tests copy assignment and copy constructor using scope.
 * - Validates whether the copied values remain consistent.
 * - Intentionally accesses out-of-bound indices to verify exception handling.
 * - Cleans up dynamically allocated memory before exiting.
 *
 * @return int 							Returns 0 on successful execution, or 
 * 										1 if value mismatch is detected. 
 * 
 */

int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));

	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	//SCOPE

	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << YELLOW TEST1 RESET << std::endl;
		std::cerr << e.what() << '\n';
	}

	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << YELLOW TEST2 RESET << std::endl;
		std::cerr << e.what() << '\n';
		std::cout << std::endl;
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	
	//
	
	return 0;
}
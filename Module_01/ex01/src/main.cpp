/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:47:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/15 23:00:42 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/**
 * The function `isnumber` checks if a given string contains only numeric 
 * characters. It iterates through each character in the string and ensures 
 * all characters are digits. If the string is empty or contains non-digit 
 * characters, it returns false.
 * 
 * @param const std::string& str    A reference to the input string to 
 * 									validate.
 * 
 * @return bool                     Returns `true` if the string contains 
 *                                  only numeric characters, `false` otherwise.
 * 
 * 
 * The function `main` serves as the entry point of the program. It prompts the 
 * user to input the number of zombies, validates the input, and creates a 
 * horde of zombies. Depending on the presence of a command-line argument, it 
 * assigns a name to the zombies. The program ensures proper memory management 
 * by deleting the zombie horde after use.
 * 
 * @param int argc                  The number of command-line arguments passed 
 *                                  to the program.
 * @param char* argv[]              An array of command-line arguments.
 * 
 * @return int                      Returns `EXIT_SUCCESS` if the program runs 
 *                                  successfully, or `EXIT_FAILURE` if there 
 *                                  is an error.
 * 
 * NOTE: 							iss = input string stream.
 * 
 */

bool isnumber(const std::string& str)
{
	if (str.empty()) {
		return false;
	}
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
		if (!std::isdigit(*it)) {
			return false;
		}
	}
	return true;	
}

int	main(int argc, char* argv[])
{
	std::string number_zbs;

	print_banner();	
	
	while (true) {
		std::cout << YELLOW NBR_ZBS RESET;
		std::cin >> number_zbs;

		if (std::cin.eof()) {
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cout << std::endl;
			continue;
		}
		if (isnumber(number_zbs))
			break;

		std::cout << BDRED INV_INPUT RESET << std::endl;
	}

	std::istringstream iss(number_zbs);
	int size;
	if (!(iss >> size)) {
		std::cerr << BDRED INT_ERR RESET << std::endl;
		return EXIT_FAILURE;
	}

	std::cout << std::endl;
	Zombie* horde = 0;

	if (argc == 1) {
		horde = new Zombie[size];
	} else {
		std::string name_zombies = argv[1];
		horde = static_cast<Zombie*>(operator new(sizeof(Zombie) * size));
		for (int i = 0; i < size; i++) {
			new (&horde[i]) Zombie(name_zombies);
		}
	}

	std::cout << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout << WHITE << i + 1 << "º " RESET;
		horde[i].announce();
	}
	std::cout << std::endl;

	if (argc == 1) {
		delete[] horde;
	} else {
		for (int i = 0; i < size; i++) {
			horde[i].~Zombie();
		}
		operator delete(horde);
	}
	std::cout << std::endl << YELLOW BYE RESET << std::endl << std::endl;
	return EXIT_SUCCESS;	
}

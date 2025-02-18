/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 08:48:09 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/18 19:53:20 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

/**
 * The function `getLevelIndex` returns the corresponding index of a given 
 * complaint level.
 * It compares the input string with predefined complaint levels: "DEBUG", 
 * "INFO", "WARNING", and "ERROR".
 * 
 * @param const char *lvl   A C-string containing the complaint level to be 
 * 							checked.
 * 
 * @return int              Returns an integer representing the index of the 
 * 							matching complaint level:
 *                          - 0 for "DEBUG"
 *                          - 1 for "INFO"
 *                          - 2 for "WARNING"
 *                          - 3 for "ERROR"
 *                          - (-1) if the input does not match any predefined 
 * 							  levels. 
 * 
 * 
 * The function `processComplaint` processes and executes a complaint level 
 * by calling the corresponding `Harl::complain` method.
 * 
 * @param const char *lvl   A C-string containing the complaint level.
 * @param Harl &reply       A reference to a `Harl` object used to process 
 * 							the complaint.
 * 
 * @return void             No return value. Outputs the corresponding 
 * 							complaint message based on the provided level.
 * 
 * Process:
 * - Calls `getLevelIndex` to determine the complaint level index.
 * - Uses a `switch` statement to execute the corresponding `complain` method.
 * - If the level is unrecognized, prints an insignificant complaint message.
 * 
 * 
 * The function `main` serves as the entry point of the program.
 * It initializes an instance of `Harl`, checks for the correct number of 
 * arguments, and processes a complaint level if provided.
 * 
 * @param int argc         The number of command-line arguments.
 * @param char *argv[]     An array of C-strings containing command-line 
 * 						   arguments.
 * 
 * @return int             Returns EXIT_SUCCESS upon successful execution.
 * 
 * Process:
 * - Displays a banner using `print_banner`.
 * - If an incorrect number of arguments is provided, displays an 
 * 	 insignificant message.
 * - Calls `processComplaint` if a valid complaint level is given.
 * 
 */

int	getLevelIndex(const char *lvl)
{
	std::string choice[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (choice[i] == lvl)
			return (i);
	}
	return (-1);
}

void	processComplaint(const char *lvl, Harl &reply)
{
	int index = getLevelIndex(lvl);
	switch (index)
	{
		case 0:
			reply.complain("DEBUG");
			break;
		case 1:
			reply.complain("INFO");
			break;
		case 2:
			reply.complain("WARNING");
			break;
		case 3:
			reply.complain("ERROR");
			break;
		default:
			std::cout << GREEN INSIG RESET << std::endl << std::endl;
	}
}

int	main(int argc, char *argv[])
{
	Harl reply;

	print_banner();

	if (argc != 2)
		std::cout << GREEN INSIG RESET << std::endl << std::endl;
	else
		processComplaint(argv[1], reply);
	return (EXIT_SUCCESS);
}

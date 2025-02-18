/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 16:44:27 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/17 22:57:54 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>					// std::cout, std::endl, ...
# include <string>						// std::string
# include <cstdlib>						// use to EXIT_FAILURE, EXIT_SUCCESS...
# include <fstream>						// std::ofstream, std::ifstream

#include "../includes/colors.hpp"
#include "../includes/macros.hpp"

/**
 * The function `my_replace` reads a string and replaces all occurrences of 
 * a specified substring with another string, writing the modified content 
 * to a new file with a `.replace` extension.
 * 
 * @param char **argv         A pointer to the command-line arguments:
 *                            - argv[1]: Name of the input file.
 *                            - argv[2]: Substring to be replaced.
 *                            - argv[3]: Substring to replace with.
 * @param std::string chain   The content of the input file stored as a string.
 * 
 * @return int                Returns EXIT_SUCCESS if the replacement process 
 *                            completes successfully, or EXIT_FAILURE if an 
 *                            error occurs while opening the output file.
 * 
 * Process:
 * - Creates a new file with the name `<original_filename>.replace`.
 * - Iterates through the input string and replaces occurrences of `argv[2]` 
 *   with `argv[3]`.
 * - Writes the modified content to the output file.
 * - If `argv[2]` is found within `chain`, it is replaced without affecting 
 *   overlapping occurrences.
 * 
 * 
 * The function `main` serves as the entry point for the program. It reads a 
 * text file, replaces occurrences of a specific substring with another 
 * substring, and writes the modified content to a new file.
 * 
 * @param int argc            The number of command-line arguments.
 * @param char **argv         The command-line arguments:
 *                            - argv[1]: Input file name.
 *                            - argv[2]: Substring to find.
 *                            - argv[3]: Substring to replace with.
 * 
 * @return int                Returns EXIT_SUCCESS if the process completes 
 *                            successfully, or EXIT_FAILURE if an error occurs 
 *                            (such as an incorrect number of arguments or 
 *                            inability to open the file).
 * 
 * Process:
 * - Validates that exactly three arguments are provided.
 * - Ensures that `argv[2]` is not an empty string.
 * - Opens and reads the input file, storing its content in a string.
 * - Calls `my_replace` to perform the substring replacement and save the 
 *   modified content to a new file.
 * 
 */

 int	my_replace(char **argv, std::string chain)
 {
	 std::string		ocurrenceFirst = argv[2];
	 std::string		ocurrenceSecond = argv[3];
	 std::string		nameNewFile;
	 std::ofstream	fileFinal;
	 size_t			place;
 
	 nameNewFile = (std::string (argv[1])) + ".replace";
	 fileFinal.open(nameNewFile.c_str());
	 if (fileFinal.fail())
		 return (EXIT_FAILURE);
	 
	 for(size_t i = 0; i < chain.length(); i++)
	 {
		 place = chain.find(ocurrenceFirst, i);
		 if (place != std::string::npos && place == i)
		 {
			 fileFinal << ocurrenceSecond;
			 i += (ocurrenceFirst.length() - 1);
		 }
		 else
			 fileFinal << chain[i];
	 }
 
	 fileFinal.close();
	 return (EXIT_SUCCESS);
 }
 
 int	main(int argc, char **argv)
 {
	 std::string			chain;
	 std::ifstream		fileInitial;
	 char				c;
	 
	 print_banner();
	 
	 if (argc != 4)
	 {
		 std::cout << BDRED ARG_ERR RESET << std::endl;
		 return (EXIT_FAILURE);		
	 }
	 if (argv[2][0] == '\0')
	 {
		 std::cout << BDRED ARG2_ERR RESET << std::endl;
		 return (EXIT_FAILURE);
	 }
 
	 fileInitial.open(argv[1]);
	 if (!fileInitial.is_open())
	 {
		 std::cerr << BDRED OPEN_ERR RESET CYAN << argv[1] << RESET YELLOW \
		 VERIF_ERR RESET << std::endl;
		 return (EXIT_FAILURE);
	 }
 
	 while  (fileInitial >> std::noskipws >> c)
		 chain += c;
 
	 fileInitial.close();
	 return (my_replace(argv, chain));
 }

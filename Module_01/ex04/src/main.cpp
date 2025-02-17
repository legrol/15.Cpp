/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 16:44:27 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/17 22:29:24 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>					// std::cout, std::endl, ...
# include <string>						// std::string
# include <cstdlib>						// use to EXIT_FAILURE, EXIT_SUCCESS...
# include <fstream>						// std::ofstream, std::ifstream

#include "../includes/colors.hpp"
#include "../includes/macros.hpp"

/**
 * 
 * 
 * 
 * 
 * 
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
			i += ocurrenceFirst.length() - 1;
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

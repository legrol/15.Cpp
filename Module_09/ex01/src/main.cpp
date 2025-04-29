/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 12:29:28 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/19 22:56:11 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

/**
 *
 * 
 * 
 * 
 * 
 * 
 */

int main(int argc, char *argv[])
{
	(void) argc;
	
	print_banner();

	if (argc ==1)
	{
		std::cout << RED ERR RESET YELLOW NOARG RESET << std::endl;
		return (EXIT_FAILURE);
	}
	argv++;
	while(*argv)
	{
		try
		{
			RPN(*argv);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return (EXIT_SUCCESS);
}

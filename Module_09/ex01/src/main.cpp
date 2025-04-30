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

static bool is_only_whitespace(const std::string& str)
{
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (!std::isspace(str[i]))
			return false;
	}
	return true;
}

int main(int argc, char *argv[])
{
	(void) argc;
	
	print_banner();

	if (argc < 2)
	{
		std::cout << RED ERR RESET YELLOW NOARG RESET << std::endl;
		return (EXIT_FAILURE);
	}

	for (int i = 1; i < argc; ++i)
	{
		std::string arg(argv[i]);
		
		if (arg.empty() || is_only_whitespace(arg))
		{
			std::cerr << RED ERR RESET YELLOW NOARG RESET << std::endl;
			continue;
		}
		try
		{
			RPN(argv[i]);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:49:22 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/06 21:07:33 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

/**
 * The function "main" processes command-line arguments, converting them 
 * to uppercase and printing the result. If no arguments are provided, 
 * it prints a predefined loud message.
 * 
 * @param int argc              The number of command-line arguments.
 * @param char **argv           An array of character pointers representing 
 *                              command-line arguments.
 * 
 * @return int                  Returns 0 upon successful execution. 
 * 
 * 
 * <iostream>					for cout, cin ....
 * <cctype> 					for toupper. tolower, isspace, islower....
 * 
 */

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
		return 0;
	}
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			for (int j = 0; argv[i][j]; ++j)
			{
				std :: cout << static_cast<char>(toupper(argv[i][j]));
			}
			std :: cout << " ";
		}
		std :: cout << std :: endl;
	}
	return 0;
}

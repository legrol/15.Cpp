/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:52:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/02 22:30:13 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

/**
 *  
 * 
 * 
 * 
 * 
 */

int main()
{
	print_banner();
	
	try
	{
		/* code */
		/* do some stuff with bureaucrats */
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		/* handle exception */
	}
	
	return (EXIT_SUCCESS);
}

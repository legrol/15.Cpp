/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:52:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/30 21:53:36 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

/**
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */

int main(void)
{
	print_banner();

	std::cout << SPACES << std::endl;
	std::cout << GREEN NMSC RESET << std::endl;
	std::cout << SPACES << std::endl << std::endl;

	Data data1;
	Data data2;

	data1.other = 42;
	data2.other = 1234;

	Data *data = &data1;
	std::cout << GREEN " Data" CYAN " has changed his pointer to " GREEN "Data 1" CYAN " and his address is:\t" YELLOW << data << std::endl
		<< CYAN " Variable " YELLOW "Something" CYAN " of " BLUE "Data" CYAN " is \t\t\t\t\t" GREEN << data->other << RESET << std::endl << std::endl;

	uintptr_t Serialized = Serializer::serialize(data);
	std::cout << GREEN " Data" CYAN " Serialized:\t" YELLOW << Serialized << RESET << std::endl << std::endl;

	data = &data2;
	std::cout << GREEN " Data" CYAN " has changed his pointer to " GREEN "Data 2" CYAN " and his address is:\t" RED << data << std::endl
		<< CYAN " Variable " YELLOW "Something" CYAN " of " BLUE "Data" CYAN " is \t\t\t\t\t" GREEN << data->other << RESET << std::endl << std::endl;

	data = Serializer::deserialize(Serialized);
	std::cout << GREEN " Data" CYAN " Des-Serialized:\t" YELLOW << Serialized << RESET << std::endl
		<< GREEN " Data" CYAN " has changed his pointer to the value Des-Serialized" << std::endl << std::endl;

	std::cout << GREEN " Data" CYAN " has his pointer now in the address:\t\t\t" YELLOW << data << std::endl
		<< CYAN " Variable " YELLOW "Something" CYAN " of " BLUE "Data" CYAN " is \t\t\t\t\t" GREEN << data->other << RESET << std::endl << std::endl;
	
	std::cout << SPACES << std::endl << std::endl;


	return (EXIT_SUCCESS);
}

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
 * @brief int main(void)
 *
 * Entry point of the Serializer test program.
 *
 * Demonstrates the serialization and deserialization of a `Data*` pointer.
 * Shows how a pointer is converted to an integer (`uintptr_t`) and then
 * restored back to a pointer using static methods from the `Serializer` class.
 *
 * - Creates two `Data` objects with different values.
 * - Serializes the pointer to `data1` into a `uintptr_t`.
 * - Overwrites the pointer with `data2` and prints its content.
 * - Deserializes the saved `uintptr_t` back into a pointer.
 * - Verifies that the pointer still points to `data1` by printing its address 
 *   and content.
 *
 * @return EXIT_SUCCESS on successful execution. 
 * 
 */

int main(void)
{
	print_banner();

	std::cout << WHITE SPACES RESET << std::endl;
	std::cout << WHITE NMSC RESET << std::endl;
	std::cout << WHITE SPACES RESET << std::endl << std::endl;

	Data data1;
	Data data2;

	data1.number = 42;
	data2.number = 666;

	Data *data = &data1;
	std::cout << GREEN DT RESET CYAN CHPOI RESET GREEN DT1 RESET CYAN ADDIS \
	RESET RED << data << RESET << std::endl;

	std::cout << CYAN VAR RESET YELLOW VAROTH RESET CYAN OF RESET BLUE DT \
	RESET CYAN IS RESET ORANGE << data->number << RESET << std::endl << \
	std::endl;


	uintptr_t Serialized = Serializer::serialize(data);
	std::cout << GREEN DT RESET CYAN SER RESET YELLOW << Serialized << RESET \
	<< std::endl << std::endl;


	std::cout << WHITE SPACES RESET << std::endl << std::endl;
	

	data = &data2;
	std::cout << GREEN DT RESET CYAN CHPOI RESET GREEN DT2 RESET CYAN ADDIS \
	RESET RED << data << RESET << std::endl;

	std::cout <<  CYAN VAR RESET YELLOW VAROTH RESET CYAN OF RESET BLUE DT \
	RESET CYAN IS RESET ORANGE << data->number << RESET << std::endl << std::endl;

	
	data = Serializer::deserialize(Serialized);
	std::cout << GREEN DT RESET CYAN DESER RESET YELLOW << Serialized << \
	RESET << std::endl;
	std::cout <<  GREEN DT RESET CYAN CHPOI2 RESET << std::endl << std::endl;

	std::cout << GREEN DT RESET CYAN CHPOI3 RESET YELLOW << data << std::endl;
	std::cout << CYAN VAR RESET YELLOW VAROTH RESET CYAN OF RESET BLUE DT \
	RESET CYAN IS RESET ORANGE << data->number << RESET << std::endl \
	<< std::endl;
	

	std::cout << WHITE SPACES RESET << std::endl << std::endl;
	return (EXIT_SUCCESS);
}

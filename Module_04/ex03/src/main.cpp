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

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

/**
 * @file main.cpp
 * @brief Entry point for testing polymorphism with `Dog` and `Cat` classes.
 *
 * This program demonstrates polymorphism by creating instances of `Dog` and 
 * `Cat`
 * using pointers to the base class `Animal`. It verifies the correct function 
 * calls to `makeSound()` and ensures proper memory deallocation.
 * 
 * 
 * @brief Main function to test `Animal` polymorphism.
 *
 * This function:
 * - Creates a `Dog` and a `Cat` object using `Animal` pointers.
 * - Calls the `makeSound()` function to verify polymorphic behavior.
 * - Deletes the objects to ensure proper destruction and memory management.
 *
 * @return EXIT_SUCCESS  Indicates successful execution.
 * 
 */

int main()
{
	std::cout << std::endl;
	Animal *doggy = new Dog();
	std::cout << std::endl;
	Animal *kitten = new Cat();

	std::cout << std::endl;
	doggy->makeSound();
	kitten->makeSound();

	std::cout << std::endl;
	delete doggy;
	std::cout << std::endl;
	delete kitten;

	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

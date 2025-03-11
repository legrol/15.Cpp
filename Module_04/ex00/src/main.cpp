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

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

/**
 *  @brief Entry point of the program that demonstrates polymorphism 
 *        and inheritance in C++ using Animal and WrongAnimal classes.
 *
 * This function creates instances of `Animal`, `Dog`, `Cat`, `WrongAnimal`, 
 * and `WrongCat` to test their behavior. It verifies:
 * - Object construction.
 * - Type identification.
 * - Virtual function behavior (`makeSound`).
 * - Proper destruction of objects.
 *
 * @return int Returns `EXIT_SUCCESS` when execution completes successfully. 
 * 
 */

int main()
{
	print_banner();
	std::cout << std::endl << RED CONSTR RESET << std::endl << std::endl;	
	const Animal* meta = new Animal();
	std::cout << std::endl;
	const Animal* j = new Dog();
	std::cout << std::endl;
	const Animal* i = new Cat();

	std::cout << std::endl << RED TYP RESET << std::endl << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl << RED SND RESET << std::endl << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	std::cout << std::endl << RED DESTR RESET << std::endl << std::endl;
	delete i;
	std::cout << std::endl;
	delete j;
	std::cout << std::endl;
	delete meta;

	std::cout << std::endl << BDBLUE TEST RESET << std::endl;
	std::cout << RED CONSTR1 RESET << std::endl << std::endl;	
	const WrongAnimal* lambda = new WrongAnimal();	
	std::cout << std::endl;
	const WrongAnimal* zeta = new WrongCat();
	std::cout << std::endl;
	const WrongCat* k = new WrongCat();	

	std::cout << std::endl << RED TYP1 RESET << std::endl << std::endl;
	std::cout << k->getType() << " " << std::endl;

	std::cout << std::endl << RED SND1 RESET << std::endl << std::endl;
	lambda->makeSound();
	zeta->makeSound();
	k->makeSound();	
	
	std::cout << std::endl << RED DESTR1 RESET << std::endl << std::endl;
	delete k;
	std::cout << std::endl;
	delete zeta;
	std::cout << std::endl;
	delete lambda;

	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

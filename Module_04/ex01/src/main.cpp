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
 * @brief Creates and tests an array of `Animal` objects.
 *
 * `void test_base()`
 *
 * This function creates an array of `Animal` objects, initializing the first 
 * half as `Cat` objects and the second half as `Dog` objects.
 * It then prints the types of all created animals, retrieves and prints 
 * specific brain ideas, and finally deallocates memory.
 * 
 * 
 * @brief Tests the copy constructor of `Cat` and `Dog` classes.
 *
 * `void test_copy_constructor()`
 *
 * This function creates instances of `Cat` and `Dog` using the copy 
 * constructor.
 * It prints information before and after deleting each object to verify 
 * correct deep copying.
 * 
 * 
 * @brief Tests the assignment operator overload for `Cat` and `Dog` classes.
 *
 * `void test_overload_operator()`
 *
 * This function creates two instances of `Cat` and assigns one to the other.
 * The same process is repeated for `Dog`. Memory deallocation is verified.
 * 
 */

void test_base()
{
	const Animal *myPets[NBR_ANIM];

	std::cout << std::endl;
	for (int i = 0; i < NBR_ANIM; i++)
	{
		if (i < NBR_ANIM / 2)
			myPets[i] = new Cat();
		else
			myPets[i] = new Dog();
	}

	std::cout << std::endl << SPACES << std::endl << std::endl;

	Brain *CatBrain = myPets[0]->getBrain();
	Brain *DogBrain = myPets[5]->getBrain();

	for (int i = 0; i < NBR_ANIM / 2; i++)
	{
		std::cout << YELLOW << myPets[i]->getType() << RESET << std::endl;
	}
	for (int i = NBR_ANIM / 2; i < NBR_ANIM; i++)
	{
		std::cout << RED << myPets[i]->getType() << RESET << std::endl;
	}

	std::cout << std::endl;
	std::cout << CYAN FSTIDCT RESET << CatBrain->getIdeas(0) << CYAN \
	SGQUOTE RESET << std::endl;
	std::cout << YELLOW OTTGHRDCT RESET << CatBrain->getIdeas(8) \
	<< std::endl;
	std::cout << YELLOW OTTGHRDCT RESET << CatBrain->getIdeas(15) \
	<< std::endl;
	std::cout << YELLOW OTTGHRDCT RESET << CatBrain->getIdeas(97) \
	<< std::endl;

	std::cout << std::endl;

	std::cout << CYAN FSTIDDG RESET<< DogBrain->getIdeas(0) << CYAN \
	SGQUOTE RESET << std::endl;
	std::cout << YELLOW OTTGHRDDG RESET << DogBrain->getIdeas(8) \
	<< std::endl;
	std::cout << YELLOW OTTGHRDDG RESET << DogBrain->getIdeas(27) \
	<< std::endl;
	std::cout << YELLOW OTTGHRDDG RESET << DogBrain->getIdeas(95) \
	<< std::endl;

	std::cout << std::endl << SPACES << std::endl << std::endl;

	for (int i = 0; i < NBR_ANIM; i++)
		delete myPets[i];
}

void test_copy_constructor()
{
	std::cout << YELLOW VRFDCCLCT RESET << std::endl << std::endl;
	const Cat *catA = new Cat();
	std::cout << std::endl;
	const Cat *catB = new Cat(*catA);

	std::cout << std::endl;
	delete catA;
	std::cout << std::endl;
	delete catB;

	std::cout << std::endl << YELLOW VRFDCCLDG RESET << std::endl << std::endl;
	const Dog *dogA = new Dog();
	std::cout << std::endl;
	const Dog *dogB = new Dog(*dogA);

	std::cout << std::endl;
	delete dogA;
	std::cout << std::endl;
	delete dogB;
}

void test_overload_operator()
{
	std::cout << YELLOW VRDCOVOPC RESET << std::endl << std::endl;
	Cat *catA = new Cat();
	std::cout << std::endl;
	Cat *catB = new Cat();

	std::cout << std::endl;
	*catA = *catB;

	std::cout << std::endl;
	delete catA;
	std::cout << std::endl;
	delete catB;	
	
	std::cout << std::endl << YELLOW VRDCOVOPD RESET << std::endl << std::endl;
	Dog *dogA = new Dog();
	std::cout << std::endl;
	Dog *dogB = new Dog();

	std::cout << std::endl;
	*dogA = *dogB;

	std::cout << std::endl;
	delete dogA;
	std::cout << std::endl;
	delete dogB;
}

int main()
{
	test_base();
	std::cout << std::endl << YELLOW SPACES RESET << std::endl << std::endl;
	test_copy_constructor();
	std::cout << std::endl << YELLOW SPACES RESET << std::endl << std::endl;
	test_overload_operator();
	
	std::cout << std::endl;

	return (EXIT_SUCCESS);
}

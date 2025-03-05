/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 01:13:48 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/02 22:46:48 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

/**
 * @brief Default constructor for the `Dog` class.
 *
 * `Dog::Dog(void)`
 * 
 * This constructor initializes a `Dog` object, setting its `type` to `"Dog"`.
 * It dynamically allocates a `Brain` object and initializes its `ideas` 
 * with predefined values.
 * 
 * 
 * @brief Copy constructor for the `Dog` class.
 *
 * `Dog::Dog(const Dog& copy)`
 * 
 * This constructor creates a new `Dog` object as a copy of an existing one.
 * It allocates a new `Brain` object to ensure deep copying of ideas.
 *
 * @param copy 					Reference to the `Dog` object to be copied.
 * 
 * 
 * @brief Overloaded assignment operator for the `Dog` class.
 *
 * `Dog& Dog::operator=(const Dog &origin)`
 * 
 * This operator assigns the attributes of one `Dog` instance to another.
 * It ensures deep copying by deleting the existing `Brain` object and 
 * allocating a new one based on `origin.brain`.
 *
 * @param origin 				Reference to the `Dog` object being assigned.
 * @return 						Dog& Reference to the assigned object.
 * 
 * 
 * @brief Destructor for the `Dog` class.
 *
 * `Dog::~Dog(void)`
 * 
 * This function is called when a `Dog` object goes out of scope.
 * It deletes the dynamically allocated `Brain` object to prevent memory leaks.
 * 
 * 
 * @brief Generates the sound of a `Dog`.
 *
 * `void Dog::makeSound() const`
 * 
 * This function prints a message representing the sound a `Dog` makes.
 * 
 * 
 * @brief Retrieves the `Brain` object of the `Dog`.
 *
 * `Brain* Dog::getBrain(void) const`
 * 
 * This function returns a pointer to the `Brain` object associated with the 
 * `Dog`.
 *
 * @return Brain* Pointer to the `Brain` object.
 * 
 * 
 * @brief 						Sets a specific idea in the `Dog`'s brain.
 *
 * `void Dog::createDogIdeas(std::string const &idea, int const index)`
 * 
 * This function assigns a new idea to a specific index in the `Brain` object.
 *
 * @param idea 					Reference to a string representing the new idea.
 * @param index 				Integer specifying the position where the idea 
 * 								should be stored.
 * 
 * 
 * @brief Retrieves and prints a specific idea from the `Dog`'s brain.
 *
 * `void Dog::getDogIdeas(int const &index)`
 * 
 * This function fetches an idea from the `Brain` object and prints it to the 
 * console.
 *
 * @param index 				Integer specifying the position of the idea to 
 * 								retrieve.
 * 
 * 
 */

Dog::Dog(void): Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
	{
		if (i == 0)
			createDogIdeas("zero idea...", i);
		else if (i % 3 == 0)
			createDogIdeas("time to run...", i);
		else if ( i % 2 == 0)
			createDogIdeas("bite bones...", i);
		else
			createDogIdeas("time to sleep...", i);
	}
	std::cout << BLUE DFLT_INI RESET << this->type << BLUE DFLT_POS \
	RESET << DFLT_DOG << std::endl;
}
 
Dog::Dog(const Dog& copy): Animal(copy)
{
	this->type = copy.type;
	this->brain = new Brain();
	std::cout << this->type << BLUE DFLT_CPY RESET << DFLT_DOG << std::endl;
}

Dog &Dog::operator=(const Dog &origin)
{
	if (this != &origin)
	{
		Animal::operator=(origin);
		delete(this->brain);
		this->brain = new Brain(*origin.brain);
		this->type = origin.type;
	}		
	return (*this);
}

Dog::~Dog(void)
{
	delete this->brain;	
	std::cout << RED DFLT_DST RESET << this->type << RED DFLT_POS \
	RESET << DFLT_DOG << std::endl;
}

void Dog::makeSound() const
{
	std::cout << YELLOW DOG_SOUND RESET << std::endl;
}

Brain *Dog::getBrain(void) const
{
	return (this->brain);
}

void Dog::createDogIdeas(std::string const &idea, int const index)
{
	this->brain->setIdeas(idea, index);
}

void Dog::getDogIdeas(int const &index)
{
	std::cout << this->brain->getIdeas(index) << std::endl;
}

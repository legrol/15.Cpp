/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 01:14:25 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/02 22:44:04 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

/**
 * @brief Default constructor for the `Cat` class.
 *
 * `Cat::Cat(void)`
 * 
 * This constructor initializes a `Cat` object, setting its `type` to `"Cat"`.
 * It also dynamically allocates a `Brain` object and initializes its `ideas`
 * with predefined values.
 * 
 * 
 * @brief Copy constructor for the `Cat` class.
 *
 * `Cat::Cat(const Cat& copy)`
 * 
 * This constructor creates a new `Cat` object as a copy of an existing one.
 * It allocates a new `Brain` object to ensure deep copying of ideas.
 *
 * @param copy 				Reference to the `Cat` object to be copied.
 * 
 * 
 * @brief Overloaded assignment operator for the `Cat` class.
 *
 * `Cat& Cat::operator=(const Cat &origin)`
 * 
 * This operator assigns the attributes of one `Cat` instance to another.
 * It ensures deep copying by deleting the existing `Brain` object and 
 * allocating a new one based on `origin.brain`.
 *
 * @param origin 			Reference to the `Cat` object being assigned.
 * @return 					Cat& Reference to the assigned object.
 * 
 * 
 * @brief Destructor for the `Cat` class.
 *
 * `Cat::~Cat(void)`
 * 
 * This function is called when a `Cat` object goes out of scope.
 * It deletes the dynamically allocated `Brain` object to prevent memory leaks.
 * 
 * 
 * @brief Generates the sound of a `Cat`.
 *
 * `void Cat::makeSound() const`
 * 
 * This function prints a message representing the sound a `Cat` makes.
 * 
 * 
 * @brief Retrieves the `Brain` object of the `Cat`.
 *
 * `Brain* Cat::getBrain(void) const`
 * 
 * This function returns a pointer to the `Brain` object associated with the 
 * `Cat`.
 *
 * @return 						Brain* Pointer to the `Brain` object.
 * 
 * 
 * @brief Sets a specific idea in the `Cat`'s brain.
 *
 * `void Cat::createCatIdeas(std::string const &idea, int const index)`
 * 
 * This function assigns a new idea to a specific index in the `Brain` object.
 *
 * @param idea 					Reference to a string representing the new 
 * 								idea.
 * @param index 				Integer specifying the position where the idea 
 * 								should be stored.
 * 
 * 
 * @brief Retrieves and prints a specific idea from the `Cat`'s brain.
 *
 * `void Cat::getCatIdeas(int const &index)`
 * 
 * This function fetches an idea from the `Brain` object and prints it to the
 * console.
 *
 * @param index 				Integer specifying the position of the idea to 
 * 								retrieve.
 * 
 */

Cat::Cat(void): Animal() 
{
	this->type = "Cat";
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
	{
		if (i == 0)
			createCatIdeas("without idea...", i);
		else if (i % 3 == 0)
			createCatIdeas("time to play...", i);
		else if ( i % 2 == 0)
			createCatIdeas("eat fish...", i);
		else
			createCatIdeas("bedtime...", i);
	}
	std::cout << GREEN DFLT_INI RESET << this->type << GREEN DFLT_POS \
	RESET << DFLT_CAT << std::endl;
}

Cat::Cat(const Cat& copy): Animal(copy)
{
	this->type = copy.type;
	this->brain = new Brain();
	std::cout << this->type << GREEN DFLT_CPY RESET << DFLT_CAT << std::endl;
}

Cat &Cat::operator=(const Cat &origin)
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

Cat::~Cat(void)
{
	delete this->brain;	
	std::cout << RED DFLT_DST RESET << this->type << RED DFLT_POS \
	RESET << DFLT_CAT << std::endl; 
}

void Cat::makeSound() const
{
	std::cout << YELLOW CAT_SOUND RESET << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return (this->brain);
}

void Cat::createCatIdeas(std::string const &idea, int const index)
{
	this->brain->setIdeas(idea, index);
}

void Cat::getCatIdeas(int const &index)
{
	std::cout << this->brain->getIdeas(index) << std::endl;
}

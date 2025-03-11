/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-03 14:26:08 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-03-03 14:26:08 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

/**
 * @brief Default constructor for the `Brain` class.
 *
 * `Brain::Brain(void)`
 * 
 * This constructor initializes a `Brain` object. It prints a message
 * confirming the creation of a `Brain` instance.
 * 
 * 
 * @brief Copy constructor for the `Brain` class.
 *
 * `Brain::Brain(const Brain& copy)`
 * 
 * This constructor creates a new `Brain` object as a copy of an existing one.
 * It copies all attributes from the original `Brain` instance.
 *
 * @param copy 				Reference to the `Brain` object to be copied.
 * 
 * 
 * @brief Overloaded assignment operator for the `Brain` class.
 *
 * `Brain& Brain::operator=(const Brain &origin)`
 * 
 * Copies the attributes of one `Brain` object to another.
 * Uses `std::copy` to copy all 100 elements of the `ideas` array.
 *
 * @param origin 			Reference to the `Brain` object being assigned.
 * @return 					Brain& Reference to the assigned object.
 * 
 * 
 * @brief Destructor for the `Brain` class.
 *
 * `Brain::~Brain(void)`
 * 
 * This function is called when a `Brain` object goes out of scope.
 * It prints a message confirming the destruction of the object.
 * 
 * 
 * @brief Retrieves an idea from the `Brain` object.
 *
 * `std::string const Brain::getIdeas(int const &index) const`
 * 
 * This function returns the idea stored at a specific index in the `ideas`
 * array.
 * If the index is out of range, it returns the first idea.
 *
 * @param index 			Reference to integer representing the requested 
 * 							idea's index.
 * @return 					std::string The idea stored at the given index.
 * 
 * 
 * @brief Sets an idea in the `Brain` object.
 *
 * `void Brain::setIdeas(std::string const &idea, int const index)`
 * 
 * This function assigns a given idea to the specified index of the `ideas` 
 * array.
 * If the index is out of range, the function does nothing.
 *
 * @param idea 				Reference to a string representing the new idea.
 * @param index 			Integer specifying the position where the idea 
 * 							should be stored.
 * 
*/

Brain::Brain(void)
{
	std::cout << MAGENTA DFLT_INI RESET << APP3_NAME << MAGENTA DFLT_POS \
	RESET << DFLT_BRN << std::endl;
}

Brain::Brain(const Brain& copy)
{
	*this = copy;
	std::cout<< APP3_NAME << MAGENTA DFLT_CPY RESET << DFLT_BRN << std::endl;
}

Brain &Brain::operator=(const Brain &origin)
{
	std::copy(origin.ideas, origin.ideas + 100, this->ideas);
	std::cout << GREEN DFLT_OPE RESET << APP3_NAME << GREEN DFLT_POS \
	RESET << DFLT_BRN << std::endl;
	return (*this); 
}

Brain::~Brain(void)
{
	std::cout << MAGENTA DFLT_DST RESET << APP3_NAME << MAGENTA DFLT_POS \
	RESET << DFLT_BRN << std::endl;
}

std::string const Brain::getIdeas(int const &index) const
{
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	return (this->ideas[0]);
}

void Brain::setIdeas(std::string const &idea, int const index)
{
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
}

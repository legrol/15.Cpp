/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:09:29 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/18 16:09:06 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

/**
 * @brief Span::Span(unsigned int N)
 *
 * Constructs a Span object with a maximum size of N elements.
 * The internal vector is reserved to prevent reallocations.
 *
 * @param N 					Maximum number of elements allowed in the Span.
 * 
 * 
 * @brief Span::Span(const Span &copy)
 *
 * Copy constructor for the Span class. Initializes a new object
 * as a copy of another Span instance.
 *
 * @param copy 					The Span instance to copy from.
 * 
 * 
 * @brief Span &Span::operator=(const Span &origin)
 *
 * Assignment operator for the Span class.
 * Copies the size and internal vector from the source instance.
 *
 * @param origin 				The Span instance to copy from.
 * @return 						A reference to the current Span instance.
 * 
 * 
 * @brief Span::~Span()
 *
 * Destructor for the Span class. Cleans up any resources.
 * 
 * 
 * @brief void Span::addNumber(int nbr)
 *
 * Adds a number to the internal vector.
 * Throws an exception if the Span has already reached its maximum size.
 *
 * @param nbr 					The number to add to the Span.
 * @throws VctrFull		 		if the Span is already full.
 * 
 * 
 * @brief size_t Span::shortestSpan()
 *
 * Calculates the shortest span (minimum difference) between any two elements.
 * Requires at least two elements in the vector.
 *
 * @return 						The smallest difference between two elements.
 * @throws VctrEmpty 			if the vector is empty.
 * @throws VctrTooFewElements 	if fewer than 2 elements are present.
 * 
 * 
 * @brief size_t Span::longestSpan()
 *
 * Calculates the longest span (maximum difference) between the minimum .
 * and maximum values.
 * Requires at least two elements in the vector.
 *
 * @return 						The difference between the largest and 
 * 								smallest element.
 * @throws VctrEmpty 			if the vector is empty.
 * @throws VctrTooFewElements 	if fewer than 2 elements are present. 
 * 
 */

Span::Span(unsigned int N): _size(N)
{
	_vctr.reserve(N);
}

Span::Span(Span const &copy)
{
	*this = copy;
}

Span const &Span::operator=(Span const &origin)
{
	_size = origin._size;
	_vctr = origin._vctr;
	return (*this);
}

Span::~Span()
{

}

void Span::addNumber(int nbr)
{
	if (_vctr.size() >= static_cast<size_t>(_size))
		throw VctrFull();
	_vctr.push_back(nbr);
}

size_t Span::shortestSpan()
{
	if (this->_vctr.empty())
		throw Span::VctrEmpty();
	if (this->_vctr.size() < 2)
		throw Span::VctrTooFewElements();

	std::vector<int> sortedArray(this->_vctr);
	std::sort(sortedArray.begin(), sortedArray.end());

	size_t shortest = std::numeric_limits<int>::max();
	for (std::vector<int>::size_type i = 1; i < sortedArray.size(); i++)
	{
		shortest = std::min(shortest, static_cast<size_t>(sortedArray[i] \
			- sortedArray[i - 1]));
	}
	return (shortest);
}

size_t Span::longestSpan()
{
	if (this->_vctr.empty())
		throw Span::VctrEmpty();
	if (this->_vctr.size() < 2)
		throw Span::VctrTooFewElements();

	int min = *std::min_element(this->_vctr.begin(), this->_vctr.end());
	int max = *std::max_element(this->_vctr.begin(), this->_vctr.end());
	
	return static_cast<size_t>(max - min);
}
 
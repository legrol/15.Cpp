/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 21:45:46 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/08 23:17:45 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/IMateriaSource.hpp"

/**
 * @brief Implementation of the `IMateriaSource` interface.
 *
 * This file defines the base interface for a `MateriaSource`, which is 
 * responsible for learning and creating Materia objects in the game. As an 
 * interface, it provides a blueprint for derived classes to implement Materia 
 * management.
 * 
 * 
 * @brief Default constructor for `IMateriaSource`.
 *
 * This constructor initializes an `IMateriaSource` instance. Since 
 * `IMateriaSource` is an interface, it does not perform any specific 
 * operations.
 * 
 * 
 * @brief Copy constructor for `IMateriaSource`.
 *
 * This constructor creates a copy of an existing `IMateriaSource` instance.
 * Since `IMateriaSource` does not manage specific resources, the copy 
 * operation is trivial and does not copy any attributes.
 *
 * @param copy  					A reference to the `IMateriaSource` 
 * 									instance to be copied.
 * 
 * 
 * @brief Overloaded assignment operator `operator=`.
 *
 * Assigns the values from one `IMateriaSource` instance to another.
 * Since `IMateriaSource` does not manage specific resources, this assignment 
 * is trivial and does not copy any attributes.
 *
 * @param origin  					A reference to the `IMateriaSource` 
 * 									instance being assigned.
 * @return IMateriaSource const&  	A reference to the assigned object.
 * 
 * 
 * @brief Virtual destructor for `IMateriaSource`.
 *
 * Ensures proper cleanup of any derived class that implements this interface.
 * As an interface, `IMateriaSource` does not manage resources, so this 
 * destructor is empty.
 * 
 */

// Definiciones inline:
IMateriaSource::IMateriaSource(void)
{

}

IMateriaSource::IMateriaSource(IMateriaSource const &copy)
{ 
	(void)copy;
}

IMateriaSource const & IMateriaSource::operator=(IMateriaSource const &origin)
{ 
	(void)origin;
	return (*this);
}

IMateriaSource::~IMateriaSource(void)
{

}

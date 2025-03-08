/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 21:43:28 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/08 23:07:32 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

/**
 * @brief Implementation of the ICharacter interface.
 *
 * This file defines the methods of the `ICharacter` interface, which serves 
 * as a base class for characters in the game. Since it is an interface, it 
 * contains only inline definitions, ensuring derived classes implement 
 * specific behaviors.
 * 
 * 
 * @brief Default constructor for `ICharacter`.
 *
 * This constructor initializes an `ICharacter` instance but does not 
 * perform any specific operations since this is an interface.
 * 
 * 
 * @brief Copy constructor for `ICharacter`.
 *
 * This constructor creates a new `ICharacter` instance as a copy of another. 
 * However, since `ICharacter` is an interface, the copy constructor does not 
 * perform any meaningful operations.
 *
 * @param copy  			A reference to the `ICharacter` object to be copied.
 * 
 * 
 * @brief Overloaded assignment operator `operator=`.
 *
 * Ensures the correct assignment of one `ICharacter` object to another.
 * However, since `ICharacter` is an interface, this operator does not 
 * modify any data and simply returns the current instance.
 *
 * @param origin  			A reference to the `ICharacter` object whose 
 * 							data is being copied.
 * @return ICharacter&  	A reference to the updated `ICharacter` object.
 * 
 * 
 * @brief Virtual destructor for `ICharacter`.
 *
 * Ensures proper cleanup of derived objects when an `ICharacter` pointer 
 * is deleted. Since this is an interface, no specific operations are needed 
 * here.
 * 
 */

// Definiciones inline:
ICharacter::ICharacter(void)
{

}

ICharacter::ICharacter(ICharacter const &copy)
{ 
	(void)copy;
}

ICharacter const & ICharacter::operator=(ICharacter const &origin)
{ 
	(void)origin;
	return (*this);
}

ICharacter::~ICharacter(void)
{

}

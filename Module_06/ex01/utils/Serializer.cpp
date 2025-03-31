/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 21:31:51 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/30 21:46:07 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Serializer.hpp"

/**
 * @brief Serializer::Serializer()
 *
 * Default constructor for the Serializer class.
 * Does not perform any special initialization.
 * 
 * 
 * @brief Serializer::Serializer(const Serializer &copy)
 *
 * Copy constructor for the Serializer class.
 * Since the class has no member attributes, performs a shallow copy.
 *
 * @param copy 						The instance to copy from.
 * 
 * 
 * @brief Serializer &Serializer::operator=(const Serializer &origin)
 *
 * Copy assignment operator for the Serializer class.
 * Does nothing meaningful since the class has no state.
 *
 * @param origin 					The instance to assign from.
 * @return 							Reference to the current instance.
 * 
 * 
 * @brief Serializer::~Serializer()
 *
 * Destructor for the Serializer class.
 * No resources are freed because the class has no members.
 * 
 * 
 * @brief uintptr_t Serializer::serialize(Data* ptr)
 *
 * Converts a pointer to a raw uintptr_t integer representation.
 *
 * @param ptr 						Pointer to the Data structure to serialize.
 * @return 							An integer representing the pointer.
 * 
 * 
 * @brief Data* Serializer::deserialize(uintptr_t raw)
 *
 * Converts a raw uintptr_t integer back to a Data pointer.
 *
 * @param raw 						The raw integer to convert.
 * @return 							A pointer to the Data structure.
 * 
 */

// ============================================================================
// Orthodox canonical format
// ============================================================================

Serializer::Serializer() 
{

}

Serializer::Serializer(const Serializer &copy)
{
	(void)copy;
}

Serializer & Serializer::operator=(const Serializer &origin)
{
	(void)origin;
	return (*this);
}

Serializer::~Serializer()
{

}

// ============================================================================
// Functions
// ============================================================================

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

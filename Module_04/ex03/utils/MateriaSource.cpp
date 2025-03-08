/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:19:37 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/08 23:26:15 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

/**
 * @brief Implementation of the `MateriaSource` class.
 *
 * This file defines the functionality for the `MateriaSource` class, which 
 * is responsible for storing and managing learned Materia. It allows 
 * characters to learn and create Materia dynamically.
 * 
 * 
 * @brief Default constructor for `MateriaSource`.
 *
 * This constructor initializes a `MateriaSource` instance with an empty 
 * inventory of Materia. The `materias` array is automatically initialized to 
 * `NULL` values.
 * 
 * 
 * @brief Copy constructor for `MateriaSource`.
 *
 * Creates a copy of an existing `MateriaSource` instance.
 * The constructor calls the assignment operator to properly copy the stored 
 * Materia.
 *
 * @param copy 					A reference to the `MateriaSource` instance 
 * 								to be copied.
 * 
 * 
 * @brief Overloaded assignment operator `operator=`.
 *
 * Assigns the values from one `MateriaSource` instance to another.
 * Copies each stored Materia by cloning them to ensure deep copying.
 *
 * @param origin 				A reference to the `MateriaSource` instance 
 * 								being assigned.
 * @return MateriaSource& 		A reference to the assigned object.
 * 
 * 
 * @brief Destructor for `MateriaSource`.
 *
 * Properly deallocates the stored Materia to prevent memory leaks.
 * 
 * 
 * @brief Adds a new Materia to the `MateriaSource`.
 *
 * This function stores the provided Materia in the first available slot.
 * If all slots are full, it does not store the Materia.
 *
 * @param m 					A pointer to the Materia to be learned.
 * 
 * 
 * @brief Creates a new Materia instance based on the learned Materia.
 *
 * This function searches for a stored Materia of the requested type and 
 * returns a cloned instance of it.
 *
 * @param type 					The type of Materia to be created.
 * @return AMateria* 			A pointer to the newly created Materia 
 * 								instance or NULL if not found.
 * 
 * 
 * @brief Checks if a given Materia is already stored in `MateriaSource`.
 *
 * This function scans the inventory to verify if the specified Materia 
 * has already been learned.
 *
 * @param m 					A pointer to the Materia to search for.
 * @return 						`true` if the Materia is already stored, 
 * 								`false` otherwise.
 *  
 */

MateriaSource::MateriaSource(void): IMateriaSource(), materias()
{
	std::cout << YELLOW NM_MS RESET << CYAN OBJ_CR RESET << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy): IMateriaSource(copy),\
 materias()
{
	*this = copy;
	std::cout << YELLOW NM_MS RESET << CYAN OBJ_CP RESET << std::endl;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &origin)
{
	for (int i = 0; i < 4; i++)
	{
		if (origin.materias[i])
			this->materias[i] = origin.materias[i]->clone();
	}
	std::cout << YELLOW NM_MS RESET << CYAN OPR_ASG RESET << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete (this->materias[i]);
	}
	std::cout << YELLOW NM_MS RESET << CYAN OBJ_DT RESET << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
	{
		std::cout << CYAN CNLINM RESET << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!this->materias[i])
		{
			this->materias[i] = m;
			std::cout << m->getType() << CYAN ISLSL RESET << i + 1 << std::endl;
			return ;
		}
	}
	std::cout << CYAN LMMFL RESET << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] && this->materias[i]->getType() == type)
			return (this->materias[i]->clone());
	}
	std::cout << CYAN CNCRM RESET << type << CYAN ISINV RESET << std::endl;
	return (EXIT_SUCCESS);
}

bool MateriaSource::lookForLearnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if(this->materias[i] == m)
			return (true);
	}
	return (false);
}

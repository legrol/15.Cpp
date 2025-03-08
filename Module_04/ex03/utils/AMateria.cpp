/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:21:12 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/08 23:00:59 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

/**
 * @brief Implementation of the AMateria class.
 *
 * This file defines the methods of the `AMateria` class, which serves as the 
 * base class for different types of magical materials. The class includes 
 * constructors, destructor, and an assignment operator, ensuring proper 
 * handling of Materia objects.
 * 
 * 
 * @brief Parameterized constructor for `AMateria`.
 *
 * Initializes an `AMateria` object with a specific type.
 *
 * @param _type  				The type of the materia to be initialized.
 * 
 * 
 * @brief Copy constructor for `AMateria`.
 *
 * Creates a new `AMateria` object by copying the attributes of an existing 
 * one.
 *
 * @param copy  				A reference to the `AMateria` object to be
 * 								copied.
 * 
 * 
 * @brief Overloaded assignment operator `operator=`.
 *
 * Copies the attributes of one `AMateria` object to another, preventing 
 * self-assignment.
 *
 * @param origin  				A reference to the `AMateria` object whose 
 * 								data will be copied.
 * @return AMateria&  			A reference to the updated object.
 * 
 * 
 * @brief Destructor for `AMateria`.
 *
 * Releases the resources of the `AMateria` object and prints a destruction 
 * message.
 * 
 * 
 * @brief Retrieves the type of the materia.
 *
 * @return std::string const&  	A constant reference to the type of the 
 * 								materia.
 * 
 */

AMateria::AMateria(std::string const & _type): type(_type)
{
	std::cout << this->type << CYAN OB_CR_DFB RESET << std::endl;
}

AMateria::AMateria(const AMateria &copy): type(copy.type)
{
	std::cout << this->type << CYAN OBJ_CP RESET << std::endl;
}

AMateria const &AMateria::operator=(AMateria const &origin)
{
	this->type = origin.type;
	std::cout << this->type << CYAN OPR_ASG RESET << std::endl;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << this->type << CYAN OBJ_DT RESET << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 21:31:51 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/30 21:38:35 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Serializer.hpp"

/**
 * 
 * 
 * 
 * 
 * 
 * 
 * 
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

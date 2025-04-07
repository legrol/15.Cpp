/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-31 09:51:49 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-03-31 09:51:49 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

/**
 * @brief Base::~Base()
 *
 * Virtual destructor for the Base class.
 *
 * Ensures proper cleanup of derived class objects when deleted via a `Base*` 
 * pointer.
 * 
 * Being virtual allows dynamic dispatch of destructors in polymorphic 
 * contexts.
 *  
 */

 Base::~Base()
 {


 }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macros.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 22:23:12 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/16 00:14:12 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MACROS_HPP
# define	MACROS_HPP

// ============================================================================
// Libraries
// ============================================================================
# include <iostream>			// std::cout, std::endl, ...
# include <string>				// std::string

// ============================================================================
// Access to my libraries
// ============================================================================
# include "colors.hpp"

// ============================================================================
// Name's macro
// ============================================================================
# define MEM_AD		"MEMORY ADDRESS"
# define MEM_AD_VAR	" Memory address of the string variable:   "
# define MEM_AD_PTR	" Memory address held by string pointer:   "
# define MEM_AD_REF	" Memory address held by string reference: "
# define MEM_VL		"MEMORY VALUES"
# define MEM_VL_VAR	" Value of the string variable:            "
# define MEM_VL_PTR	" Value held by string pointer:            "
# define MEM_VL_REF	" Value held by string reference:          "

// ============================================================================
// Banner
// ============================================================================
void	print_banner(void);

# endif
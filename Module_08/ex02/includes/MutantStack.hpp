/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:05:20 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/18 20:29:10 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// ============================================================================
// Libraries
// ============================================================================
# include <iostream>			// std::cout, std::cerr, std::endl, ...
# include <cstdlib>				// use to EXIT_FAILURE, EXIT_SUCCESS ...
# include <list>				// for container list
# include <stack>				// for std::stack
# include <deque>				// for std::deque

// ============================================================================
// Access to my libraries
// ============================================================================
#include "macros.hpp"
#include "colors.hpp"

template <typename T>
class MutantStack: public std::stack<T>
{
	private:

		

	public: 

		typedef typename std::stack<T>::container_type::const_iterator \
		const_iterator;
		
		MutantStack();
		MutantStack (MutantStack const &copy);
		MutantStack &operator=(MutantStack const &origin);
		~MutantStack();

		const_iterator begin();
		const_iterator end();
			
};

// ============================================================================
// Access to my templates libraries
// ============================================================================
#include "MutantStack.tpp"

// ============================================================================
// Functions
// ============================================================================
void			print_banner();

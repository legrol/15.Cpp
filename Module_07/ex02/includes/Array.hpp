/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:56:23 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/15 14:24:04 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// ============================================================================
// Libraries
// ============================================================================
# include <iostream>			// std::cout, std::cerr, std::endl, ...
# include <string>				// std::string
# include <cstdlib>				// use to EXIT_FAILURE, EXIT_SUCCESS ...
# include <unistd.h>			// for sleep, ...
# include <stdlib.h>			// for srand, ...

// ============================================================================
// Access to my libraries
// ============================================================================
#include "macros.hpp"
#include "colors.hpp"

// ============================================================================
// Templates functions
// ============================================================================

template <typename T> 
class Array
{

	private:

		T*_array;
		size_t length;
		
	public:

		Array(): _array(NULL), length(0) {}
		Array(unsigned int n): _array(NULL), length(n)	
		{
			if (this->length == 0)
				throw std::out_of_range(OURG);
			this->_array = new T[length]();
		}
		Array(const Array &copy): _array(NULL), length(0)
		{
			*this = copy;
		}
		Array &operator=(const Array &origin)
		{
			if (this->_array != NULL)
				delete[] this->_array;
			if (origin.length != 0)
			{
				this->_array = new T[origin.length]();
				for (unsigned int index = 0; index < this->size(); index++)
					this->_array[index] = origin._array[index];
				this->length = origin.length;
			}
			return (*this);
		}
		~Array()
		{
			if (this->_array != NULL)
				delete[] _array;
		}


		T &operator[](size_t index)
		{
			if (index >= this->length)
				throw std::out_of_range(OURG);
			return (this->_array[index]);
		}
		
		size_t size()
		{
			return (length);
		}	
};

// ============================================================================
// Functions
// ============================================================================
void			print_banner();

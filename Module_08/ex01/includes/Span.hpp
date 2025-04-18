/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:05:20 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/18 17:03:13 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// ============================================================================
// Libraries
// ============================================================================
# include <iostream>			// std::cout, std::cerr, std::endl, ...
# include <string>				// std::string
# include <cstdlib>				// use to EXIT_FAILURE, EXIT_SUCCESS ...
# include <algorithm>			// to access various algorithms ...
# include <vector>				// for container vector
# include <limits>				// std::numeric_limits, ...

// ============================================================================
// Access to my libraries
// ============================================================================
#include "macros.hpp"
#include "colors.hpp"

class Span
{
	private:

		unsigned int _size;
		std::vector<int> _vctr;
		Span();

	public: 

		Span(unsigned int N);
		Span (Span const &copy);
		Span const &operator=(Span const &origin);
		
		~Span();

		void addNumber(int nbr);

		size_t shortestSpan();
		size_t longestSpan();

		template <typename InputIterator>
		void addRange(InputIterator first, InputIterator last);

		class VctrFull: public std::exception {
			public:
				const char* what() const throw() {
					return (WHITE VCTFLL RESET);
				}
		};

		class VctrEmpty: public std::exception {
			public:
				const char* what() const throw() {
					return (WHITE VCTEMP RESET);
				}
		};

		class VctrOnlyOne: public std::exception {
			public:
				const char* what() const throw() {
					return (WHITE VCTONON RESET);
				}
		};

		class VctrAlreadyPresent: public std::exception {
			public:
				const char* what() const throw() {
					return (WHITE VCTNBRALR RESET);
				}
		};

		class VctrTooFewElements: public std::exception {
			public:
				const char* what() const throw() {
					return (WHITE VCTTFEL RESET);
				}
		};
};

// ============================================================================
// Functions
// ============================================================================
void			print_banner();

template <typename InputIterator>
void Span::addRange(InputIterator first, InputIterator last)
{
    for (; first != last; ++first)
    {
        if (_vctr.size() >= _size)
            throw VctrFull();
        _vctr.push_back(*first);
    }
}

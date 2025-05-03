/* ************************************************************************** */
/*                               digas para que valen con un comentario los que se q                                             */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:43:40 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/05/03 22:05:34 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// ============================================================================
// Libraries
// ============================================================================
# include <iostream>			// std::cout, std::cerr, std::endl, ...
# include <cstdlib>				// use to EXIT_FAILURE, EXIT_SUCCESS ...
# include <vector>				// std::vector Container
# include <deque>				// std::deque Container
# include <iterator>			// std::iter_swap (Used in mergeInsertSort)
# include <climits>				// INT_MAX in validation
# include <sys/time.h>			// gettimeofday (to measure time)
# include <iomanip>				// std::fixed, std::setprecision (show times)
# include <algorithm>			// std::lower_bound
# include <cctype>				// std::isdigit (for numerical validation)
# include <stdexcept>			// std::runtime_error (for exceptions)
# include <sstream>				// std::ostringstream (for errors with values)

// ============================================================================
// Access to my libraries
// ============================================================================
#include "macros.hpp"
#include "colors.hpp"

// ============================================================================
// Mandatory
// ============================================================================
class PmergeMe
{
	private:

		PmergeMe(void);
		PmergeMe(PmergeMe const &copy);
		PmergeMe const &operator=(PmergeMe const &origin);		
		~PmergeMe();

		template<typename T>
		static void binaryInsert(T &container, int value);

		template<typename T>
		static void mergeInsertSort(T &container);

	public:

		static double sortVector(std::vector<int> &data);
		static double sortDeque(std::deque<int> &data);

};

// ============================================================================
// Other Functions
// ============================================================================
void			print_banner();

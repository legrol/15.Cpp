/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:43:00 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/05/04 23:28:56 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

/**
 * @brief PmergeMe::PmergeMe(void)
 *
 * Default constructor for the PmergeMe class.
 * 
 * 
 * @brief PmergeMe::PmergeMe(PmergeMe const &copy)
 *
 * Copy constructor for the PmergeMe class.
 *
 * @param copy 						The instance to copy from.
 * 
 * 
 * @brief PmergeMe const &PmergeMe::operator=(PmergeMe const &origin)
 *
 * Assignment operator overload for the PmergeMe class.
 *
 * @param origin 					The instance to assign from.
 * @return 							Reference to the current instance.
 * 
 * 
 * @brief PmergeMe::~PmergeMe(void)
 *
 * Destructor for the PmergeMe class.
 * 
 * 
 * @brief template<typename T> void PmergeMe::binaryInsert(T &container, 
 * int value)
 *
 * Inserts an element into a sorted container using binary insertion.
 *
 * @tparam T 						The container type (e.g., std::vector 
 * 									or std::deque).
 * @param container 				The container where the element will be 
 * 									inserted.
 * @param value 					The integer value to insert.
 * 
 * 
 * @brief template<typename T> void PmergeMe::mergeInsertSort(T &container)
 *
 * Sorts a container using a merge-insert sort strategy, also known as 
 * Ford-Johnson algorithm.
 *
 * @tparam T 						The container type (e.g., std::vector or 
 * 									std::deque).
 * @param container 				The container to sort.
 * 
 * 
 * @brief double PmergeMe::sortVector(std::vector<int> &data)
 *
 * Sorts a std::vector<int> using merge-insert sort and returns the time 
 * taken in microseconds.
 *
 * @param data The vector to be sorted.
 * @return Time in microseconds to perform the sort.
 * 
 * 
 * @brief double PmergeMe::sortDeque(std::deque<int> &data)
 *
 * Sorts a std::deque<int> using merge-insert sort and returns the time 
 * taken in microseconds.
 *
 * @param data 						The deque to be sorted.
 * @return 							Time in microseconds to perform the sort.
 * 
 */

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(PmergeMe const &copy)
{
	(void)copy;
}

PmergeMe const &PmergeMe::operator=(PmergeMe const &origin)
{
	(void)origin;
	return *this;
}

PmergeMe::~PmergeMe(void) {}

template<typename T>
void PmergeMe::binaryInsert(T &container, int value)
{
	typename T::iterator it = std::lower_bound(container.begin(), \
	container.end(), value);
	container.insert(it, value);
}

template<typename T>
void PmergeMe::mergeInsertSort(T &container)
{
	if (container.size() <= 1)
		return;

	typename T::iterator it = container.begin();
	while (it != container.end())
	{
		typename T::iterator next = it;
		++next;
		if (next != container.end() && *it > *next)
			std::iter_swap(it, next);
		if (next == container.end())
			break;
		it = next;
		++it;
	}

	T runA, runB;
	bool toggle = true;
	for (typename T::iterator i = container.begin(); i != \
	container.end(); ++i)
	{
		if (toggle)
			runA.push_back(*i);
		else
			runB.push_back(*i);
		toggle = !toggle;
	}

	mergeInsertSort(runA);
	mergeInsertSort(runB);0

	for (typename T::iterator i = runB.begin(); i != runB.end(); ++i)
		binaryInsert(runA, *i);

	container = runA;
}

double PmergeMe::sortVector(std::vector<int> &data)
{
	struct timeval start, end;
	gettimeofday(&start, NULL);
	mergeInsertSort(data);
	gettimeofday(&end, NULL);
	return (end.tv_sec - start.tv_sec) * 1e6 + (end.tv_usec - \
		start.tv_usec);
}

double PmergeMe::sortDeque(std::deque<int> &data)
{
	struct timeval start, end;
	gettimeofday(&start, NULL);
	mergeInsertSort(data);
	gettimeofday(&end, NULL);
	return (end.tv_sec - start.tv_sec) * 1e6 + (end.tv_usec - \
		start.tv_usec);
}

template void PmergeMe::mergeInsertSort(std::vector<int>&);
template void PmergeMe::mergeInsertSort(std::deque<int>&);
template void PmergeMe::binaryInsert(std::vector<int>&, int);
template void PmergeMe::binaryInsert(std::deque<int>&, int);

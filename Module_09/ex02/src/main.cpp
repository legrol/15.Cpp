/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 12:29:28 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/05/03 23:10:26 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

/**
 * @brief void validateInput(int argc, char **argv, std::vector<int> &vec, 
 * std::deque<int> &deq)
 *
 * Validates and parses command line arguments into containers.
 * Checks for empty, negative, non-digit, zero, or duplicate values.
 * Fills both the provided vector and deque with validated integers.
 *
 * @param argc 						The argument count from main().
 * @param argv 						The argument values from main().
 * @param vec 						A vector to store the validated integers.
 * @param deq 						A deque to store the validated integers.
 * @throws std::runtime_error 		if an argument is invalid or duplicated.
 *
 * 
 * @brief void printContainer(const std::string &label, const std::vector<int>
 *  &cont)
 *
 * Prints the elements of a container preceded by a label.
 *
 * @param label 					A descriptive label to display before the 
 * 									elements.
 * @param cont 						The vector container to be printed.
 * 
 * 
 * @brief int main(int argc, char **argv)
 *
 * Entry point of the program. Validates input, sorts data using PmergeMe,
 * prints results and processing times for both vector and deque containers.
 *
 * @param argc 						Argument count.
 * @param argv 						Argument values.
 * @return EXIT_SUCCESS 			if successful, EXIT_FAILURE on any input
 * 									 or runtime error.
 * 
 */

void	validateInput(int argc, char **argv, std::vector<int> &vec, \
	std::deque<int> &deq)
{
	std::vector<int> seen;

	for (int i = 1; i < argc; ++i)
	{
		const char *arg = argv[i];
		if (!arg[0])
			throw std::runtime_error(RED ERR RESET CYAN EMPARG RESET);

		if (arg[0] == '-')
			throw std::runtime_error(RED ERR RESET CYAN ONPOS RESET);

		int j = 0;
		if (arg[0] == '+')
			j = 1;

		for (; arg[j]; ++j)
		{
			if (!std::isdigit(arg[j]))
				throw std::runtime_error(RED ERR RESET CYAN NDGT RESET);
		}

		long num = std::atol(arg);
		if (num == 0)
			throw std::runtime_error(RED ERR RESET CYAN ZNTALL RESET);
		if (num > INT_MAX)
			throw std::runtime_error(RED ERR RESET CYAN INTMX RESET);

		int value = static_cast<int>(num);

		for (size_t k = 0; k < seen.size(); ++k)
		{
			if (seen[k] == value)
			{
				std::ostringstream oss;
				oss << RED ERR RESET CYAN VALDUP1 RESET << value
					<< CYAN VALDUP2 RESET  << i;
				throw std::runtime_error(oss.str());
			}
		}

		seen.push_back(value);
		vec.push_back(value);
		deq.push_back(value);
	}
}

void	printContainer(const std::string &label, const std::vector<int> &cont)
{
	std::cout << label;
	for (std::vector<int>::const_iterator it = cont.begin(); \
	it != cont.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << RED ERR RESET CYAN SQINV RESET << std::endl;
		return (EXIT_FAILURE);
	}

	std::vector<int> vec;
	std::deque<int> deq;

	try
	{
		validateInput(argc, argv, vec, deq);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (EXIT_FAILURE);
	}

	print_banner();

	printContainer(GREEN BFR RESET, vec);

	double timeVec = PmergeMe::sortVector(vec);
	double timeDeq = PmergeMe::sortDeque(deq);

	printContainer(GREEN AFT RESET, vec);

	std::cout << std::endl;
	std::cout << YELLOW TMPRC RESET << vec.size() << YELLOW WTHVCT RESET \
	<< std::fixed << std::setprecision(6) << timeVec / VLDIV  << YELLOW \
	USG RESET << std::endl;

	std::cout << YELLOW TMPRC RESET << deq.size() << YELLOW WTHDQ RESET \
	<< std::fixed << std::setprecision(6) << timeDeq / VLDIV << YELLOW \
	USG RESET << std::endl;
	std::cout << std::endl;

	return (EXIT_SUCCESS);
}

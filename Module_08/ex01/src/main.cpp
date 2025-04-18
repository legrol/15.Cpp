/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 01:08:18 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/18 16:55:13 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

/**
 * @brief int main()
 *
 * Entry point for testing the `Span` class and its methods.
 *
 * This function runs multiple test scenarios:
 * - A standard case with 5 distinct numbers.
 * - A case with too few elements to compute a span.
 * - A case where all elements are equal.
 * - A large input with 10,000 values.
 * - A case where the number of inserted elements exceeds the span's capacity.
 *
 * Each case is wrapped in a try-catch block to handle and display
 * potential exceptions thrown by the `Span` class.
 *
 * @return int Returns EXIT_SUCCESS if the program completes successfully.
 * 
 */

int main()
{
	print_banner();
	
	{
		try {
			std::cout << CYAN CSSUB RESET << std::endl << std::endl;
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
	
			std::cout << YELLOW SHSP RESET << sp.shortestSpan() << std::endl;
			std::cout << YELLOW LNGSP RESET << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	
		std::cout << std::endl << CYAN OPT1 RESET MAGENTA FEWEL RESET  \
		<< std::endl << std::endl;
		try {
			Span sp(2);
			sp.addNumber(42);
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << RED CGEXC RESET << e.what() << std::endl;
		}
	
		std::cout << std::endl << CYAN OPT2 RESET MAGENTA ALLEQ RESET \
		<< std::endl << std::endl;
		try {
			Span sp(3);
			sp.addNumber(7);
			sp.addNumber(7);
			sp.addNumber(7);
			std::cout << YELLOW SHSP RESET << sp.shortestSpan() << std::endl;
			std::cout << YELLOW LNGSP RESET << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	
		std::cout << std::endl << CYAN OPT2 RESET MAGENTA LRGNBR RESET \
		<< std::endl << std::endl;
		try {
			Span sp(10000);
			for (int i = 0; i < 10000; ++i)
				sp.addNumber(i * 2);
	
			std::cout << YELLOW SHSP RESET << sp.shortestSpan() << std::endl;
			std::cout << YELLOW LNGSP RESET << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	
		std::cout << std::endl << CYAN OPT4 RESET MAGENTA MORCPC RESET \
		<< std::endl << std::endl;
		try {
			Span sp(3);
			sp.addNumber(1);
			sp.addNumber(2);
			sp.addNumber(3);
			sp.addNumber(4);
		}
		catch (const std::exception &e) {
			std::cerr << RED CGEXC RESET << e.what() << std::endl;
		}

		std::cout << std::endl << CYAN CS RESET MAGENTA LSCS RESET \
		<< std::endl << std::endl;
		try {
			std::vector<int> manyNumbers;
			for (int i = 0; i < 65000; ++i)
				manyNumbers.push_back(i);

			Span sp(65000);
			sp.addRange(manyNumbers.begin(), manyNumbers.end());

			std::cout << YELLOW SHSP RESET << sp.shortestSpan() << std::endl;
			std::cout << YELLOW LNGSP RESET << sp.longestSpan() << std::endl;
			std::cout << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << RED CGEXC RESET << e.what() << std::endl << std::endl;
		}
	}
	return (EXIT_SUCCESS);
}

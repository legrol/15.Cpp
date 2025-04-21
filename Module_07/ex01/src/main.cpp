/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 07:52:22 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/20 00:13:00 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

/**
 * brief class Amazing
 *
 * A simple class holding an integer, demonstrating custom type iteration.
 *
 * 
 * @brief std::ostream & operator<<(std::ostream &str, Amazing const &obj)
 *
 * Overloads the `<<` operator to output an `Amazing` instance by using its 
 * `get()` method.
 *
 * @param str 							The output stream to write to.
 * @param obj 							The `Amazing` object to print.
 * @return 								A reference to the output stream.
 * 
 * 
 * @brief template <typename T> void print(T& data)
 *
 * Generic print function to be used with `iter()`.
 * Prints any data passed using `std::cout` and applies formatting.
 *
 * @param data 							The data element to print.
 * 
 * 
 * @brief int main(void)
 *
 * Entry point of the program. Demonstrates the use of the `iter()` function
 * with different types of arrays: integers, strings, and custom class 
 * `Amazing`.
 *
 * - Calls `iter()` with an integer array.
 * - Calls `iter()` with a string array.
 * - Calls `iter()` with an `Amazing` object array.
 *
 * @return 								EXIT_SUCCESS on successful execution.
 * 
 */

class Amazing
{
	private:

		int _nbr;

	public:

		Amazing(void): _nbr(42)
		{
			return ;
		}
		int get(void) const
		{
			return (this->_nbr);
		}
};

std::ostream & operator<<(std::ostream &str, Amazing const &obj)
{
	str << obj.get();
	return (str);
}

template <typename T>
void print(T& data)
{
	std::cout << YELLOW << data << RESET << std::endl;
	return ;
}

int main(void)
{
	print_banner();

	int wholeint[] = {7, 15, 23, 42, 77, 666};
	std::string wholeint1[] = {F2, DN, PNC};
	Amazing wholeint2[5];

	std::cout << CYAN ARRINT RESET << std::endl << std::endl;
	iter(wholeint, 6, print<const int>);
	std::cout << std::endl;

	std::cout << CYAN ARRSTR RESET << std::endl << std::endl;
	iter(wholeint1, 3, print<const std::string>);
	std::cout << std::endl;

	std::cout << CYAN ARRCLSS RESET << std::endl << std::endl;
	iter(wholeint2, 4, print<Amazing>);
	std::cout << std::endl;

	return (EXIT_SUCCESS);
}

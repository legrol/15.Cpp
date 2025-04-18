/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 01:08:18 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/18 20:36:11 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

/**
 * @brief int main()
 *
 * Entry point of the program that demonstrates and compares the behavior of
 * the custom MutantStack class and the standard std::list.
 * 
 * - Tests push, pop, top, size, and iteration on MutantStack.
 * - Shows compatibility with std::stack interface.
 * - Performs similar operations using std::list for comparison.
 *
 * @return int 					Returns EXIT_SUCCESS on successful completion. 
 * 
 */

int main()
{
	print_banner();
	
	std::cout << WHITE MUTTST RESET << std::endl << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << std::endl << YELLOW TOP RESET << mstack.top() << std::endl;

		mstack.pop();

		std::cout << YELLOW SZAFP RESET << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::const_iterator it = mstack.begin();
		MutantStack<int>::const_iterator ite = mstack.end();

		std::cout << std::endl << MAGENTA ITMTST RESET << std::endl;
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << std::endl;
	}

	std::cout << std::endl << WHITE LSTTST RESET << std::endl << std::endl;
	{
		std::list<int> lst;

		lst.push_back(5);
		lst.push_back(17);
		
		std::cout << YELLOW BACK RESET  << lst.back() << std::endl;
		
		lst.pop_back();
		
		std::cout << YELLOW SZAFPB RESET << lst.size() << std::endl;
		
		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(737);
		lst.push_back(42);
		lst.push_back(666);
		lst.push_back(0);

		std::list<int>::const_iterator it = lst.begin();
		std::list<int>::const_iterator ite = lst.end();
		
		std::cout << std::endl << MAGENTA ITLST RESET << std::endl;
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(lst);
		std::cout << std::endl;
	}
	
	return (EXIT_SUCCESS);
}

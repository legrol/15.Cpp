/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:05:50 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/18 20:35:25 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

/**
 * @brief template <typename T> MutantStack<T>::MutantStack()
 *
 * Default constructor for MutantStack.
 * Initializes the underlying std::stack and prints a creation message.
 * 
 * 
 * @brief template <typename T> MutantStack<T>::MutantStack(const \
 * MutantStack<T> &copy)
 *
 * Copy constructor for MutantStack.
 * Initializes the stack by copying another MutantStack instance.
 *
 * @param copy 							The MutantStack instance to copy.
 * 
 * 
 * @brief template <typename T> MutantStack<T> \
 * &MutantStack<T>::operator=(const MutantStack<T> &origin)
 *
 * Assignment operator for MutantStack.
 * Performs a deep copy of the stack contents if the instances are different.
 *
 * @param origin 						The MutantStack to assign from.
 * @return 								Reference to the assigned MutantStack.
 * 
 * 
 * @brief template <typename T> MutantStack<T>::~MutantStack()
 *
 * Destructor for MutantStack.
 * Prints a destruction message.
 * 
 * 
 * @brief template <typename T> typename MutantStack<T>::const_iterator \
 * MutantStack<T>::begin()
 *
 * Returns an iterator to the beginning of the stack.
 *
 * @return 								Const iterator to the beginning of 
 * 										the underlying container.
 * 
 * 
 * @brief template <typename T> typename MutantStack<T>::const_iterator \
 * MutantStack<T>::end()
 *
 * Returns an iterator to the end of the stack.
 *
 * @return 								Const iterator to the end of the 
 * 										underlying container.
 * 
 */

template <typename T>
MutantStack<T>::MutantStack()
{
	std::cout << CYAN INIT_ERR RESET GREEN CACONDF RESET << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack (MutantStack<T> const &copy): std::stack<T>(copy)
{
	std::cout << CYAN INIT_ERR RESET GREEN CACONCP RESET << std::endl;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &origin)
{
	if (this != &origin)
		std::stack<T>::operator=(origin);
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << CYAN INIT_ERR RESET GREEN CADESDF RESET << std::endl;
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end()
{
	return this->c.end();
}

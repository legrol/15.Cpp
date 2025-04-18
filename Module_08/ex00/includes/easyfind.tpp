/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:31:47 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/18 17:07:41 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

/**
 * @brief template <typename T> bool easyfind(T &containerInt, int value)
 *
 * Searches for a given integer value in a container.
 * Uses `std::find` to determine if the value exists in the container.
 *
 * @tparam T 				The container type (must support `begin()` and 
 * 							`end()` iterators).
 * @param containerInt 		The container to search in.
 * @param value 			The integer value to find.
 * @return true 			if the value is found.
 * @throws FindException 	if the value is not found in the container.
 *  
 */

template <typename T>
bool easyfind(T &containerInt, int value)
{
	if ((std::find(containerInt.begin(), containerInt.end(), value)) == \
	containerInt.end())
		throw FindException();
	return (true);
}

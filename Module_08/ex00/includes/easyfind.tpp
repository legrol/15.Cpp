/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:31:47 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/04/16 00:38:17 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

template <typename T>
bool easyfind(T &containerInt, int value)
{
	if ((std::find(containerInt.begin(), containerInt.end(), value)) == \
	containerInt.end())
		throw FindException();
	return (true);
}

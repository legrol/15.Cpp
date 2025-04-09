/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-09 07:52:22 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-04-09 07:52:22 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

/**
 * 
 * 
 */



class Amazing
{
	private:



	public:



};




int main(void)
{
	print_banner();

	int wholeint[] = {15, 42, 666};
	Amazing wholeint2[6];

	iter(wholeint, 6, print<const int>);
	iter(wholeint2, 6, print<Amazing>);

	return (EXIT_SUCCESS);
}

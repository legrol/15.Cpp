/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 08:48:09 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/18 18:59:48 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

/**
 * The function `main` serves as the entry point of the program.
 * It initializes an instance of the `Harl` class and sequentially 
 * invokes the `complain` method for different complaint levels.
 * 
 * @return int   Returns EXIT_SUCCESS upon successful execution.
 * 
 * Process:
 * - Instantiates an object of the `Harl` class named `reply`.
 * - Calls the `print_banner` function to display an introductory message.
 * - Invokes the `complain` method with different complaint levels:
 *   - "DEBUG"   → Calls `Harl::debug`
 *   - "INFO"    → Calls `Harl::info`
 *   - "WARNING" → Calls `Harl::warning`
 *   - "ERROR"   → Calls `Harl::error
 * 
 */

int	main(void)
{
	Harl reply;

	print_banner();
	reply.complain("DEBUG");
	reply.complain("INFO");
	reply.complain("WARNING");
	reply.complain("ERROR");
}

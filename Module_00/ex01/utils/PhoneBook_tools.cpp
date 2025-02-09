/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_tools.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:03:11 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/09 13:32:38 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/collection.hpp"

/**
 * The function "append_spaces" generates a string containing a specified 
 * number of spaces. It is primarily used for formatting purposes when aligning 
 * text in a table or layout.
 * 
 * @param int nbr                The number of spaces to append to the string.
 * 
 * @return std::string           Returns a string containing `nbr` spaces.
 * 
 * 
 * 
 * The function "set_width" adjusts the width of a given string to a specified 
 * maximum width. If the string exceeds the specified width, it is truncated, 
 * and the last character is replaced with a period ('.') to indicate 
 * truncation.
 * 
 * @param std::string str        The input string to be adjusted.
 * @param long unsigned width_max The maximum width allowed for the string.
 * 
 * @return std::string           Returns the modified string, either truncated 
 *                                or unchanged if its size is within the limit.
 * 
 * 
 * 
 * The function "search_ui" displays a formatted table of contacts stored in 
 * the `list` array. It includes the index, first name, last name, and nickname 
 * of each valid contact (non-empty). The function uses helper functions for 
 * formatting and alignment.
 * 
 * @param Contact list[8]        An array of `Contact` objects containing up to 
 *                                8 contacts to be displayed.
 * 
 * @return int                   Returns the number of valid contacts displayed 
 *                                in the table.
 * 
 * The table includes headers for clarity, displays contact details, and 
 * ensures proper alignment of text using the helper functions "set_width" and 
 * "append_spaces".
 * 
 */

std::string	append_spaces(int nbr)
{
	std::string	total_spaces;

	while (nbr--)
		total_spaces.append(" ");
	return (total_spaces);
}

std::string	set_width(std::string str, long unsigned width_max)
{
	if (str.size() > width_max)
	{
		str.resize(width_max);
		str[str.size() -1] = '.';
	}
	return (str);
}

int	search_and_display(Contact list[8])
{
	char		c;
	int			i;
	std::string	str;

	std::cout << "   ___________________________________________   " << std::endl;
	std::cout << "  |  " WHITE "Index" RESET "   |" WHITE "First Name" RESET \
	"|" WHITE "Last  Name" RESET "|" WHITE " Nickname " RESET "|  " << std::endl;
	std::cout << "  |----------|----------|----------|----------|  " << std::endl;
	c = '0';
	i = 0;
	while (++c <= '8')
	{
		if (list[c - 1 - '0'].get_name().size() && ++i)
		{
			str = c;
			str = set_width(str, 10);
			std::cout << "  |" << append_spaces(10 - str.size()) << str;
			str = set_width(list[c - 1 - '0'].get_name(), 10);
			std::cout << "|" << append_spaces(10 - str.size()) << str;
			str = set_width(list[c - 1 - '0'].get_last_name(), 10);
			std::cout << "|" << append_spaces(10 - str.size()) << str;
			str = set_width(list[c - 1 - '0'].get_nick(), 10);
			std::cout << "|" << append_spaces(10 - str.size()) << str;
			std::cout << "|" << std::endl;
		}
	}
	std::cout << "   -------------------------------------------   " << std::endl;
	return (i);
}

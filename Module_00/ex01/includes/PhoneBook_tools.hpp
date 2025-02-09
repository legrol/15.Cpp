/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_tools.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:04:47 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/09 13:27:56 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_TOOLS_HPP
# define PHONEBOOK_TOOLS_HPP

# include "collection.hpp"

std::string append_spaces(int nbr);
std::string	set_width(std::string str, long unsigned max);
int			search_and_display(Contact list[8]);

# endif
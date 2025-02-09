/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 21:11:26 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/09 13:47:58 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/collection.hpp"

/**
 * 
 * 
 * 
 * 
 * 
 */

PhoneBook::PhoneBook(void)
{
	this->_id = 0;
	print_banner();
	std::cout << CYAN HI RESET << std::endl;
	std::cout << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << CYAN BYE RESET << std::endl;
	std::cout << std::endl;
}

void PhoneBook::add_contact(void)
{
	std::string	str;

	str = "";
	if (this->_id > 7)
		std::cout << RED WARNING RESET << \
		this->_list[this->_id % 8].get_name() << std::endl;
	while (!std::cin.eof() && str == "")
	{
		if (this->_id > 7)
			std::cout << WHITE ENTER << \
			this->_list[this->_id % 8].get_name() << " " << ENT_NAME RESET;
		else
			std::cout << WHITE ENTER << \
			this->_list[this->_id % 8].get_name() << ENT_NAME RESET;
		if (std::getline(std::cin, str) && str != "")
			this->_list[this->_id % 8].set_name(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << WHITE ENTER << \
		this->_list[this->_id % 8].get_name() << ENT_LNAME RESET;
		if (std::getline(std::cin, str) && str != "")
			this->_list[this->_id % 8].set_last_name(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << WHITE ENTER << \
		this->_list[this->_id % 8].get_name() << ENT_NICK RESET;
		if (std::getline(std::cin, str) && str != "")
			this->_list[this->_id % 8].set_nick(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << WHITE ENTER << \
		this->_list[this->_id % 8].get_name() << ENT_PNBR RESET;
		if (std::getline(std::cin, str) && str != "")
			this->_list[this->_id % 8].set_phone_number(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << WHITE ENTER << \
		this->_list[this->_id % 8].get_name() << ENT_SECRET RESET;
		if (std::getline(std::cin, str) && str != "")
		{
			this->_list[this->_id % 8].set_secret(str);
			std::cout << this->_list[this->_id % 8].get_name() << \
			GREEN ENT_OK << this->_id % 8 + 1  << ENT_OK_END RESET << \
			std::endl;
			std::cout << std::endl;
		}
	}
	this->_id++;
}

void PhoneBook::search_contact(void)
{
	std::string	str;

	if (!search_and_display(this->_list))
	{
		std::cout << std::endl << YELLOW PB_EMPTY RESET << std::endl;
		return ;
	}
	while (!std::cin.eof())
	{
		std::cout << YELLOW SL_IDX RESET;
		if (std::getline(std::cin, str) && str != "")
		{
			if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && \
					this->_list[str[0] - 1 - '0'].get_name().size())
				break ;
		}
		if (str != "")
			std::cout << RED ERROR RESET YELLOW INV_IDX RESET << std::endl;
	}
	if (!std::cin.eof())
		this->print_contact(this->_list[str[0] - 1 - '0']);
}

void PhoneBook::print_contact(Contact contact)
{
	std::cout << std::endl << GREEN RQT_IF RESET << std::endl;
	if (!contact.get_name().size())
	{
		std::cout << RED FLD_IF RESET << std::endl;
		return ;
	}
	std::cout << YELLOW FST_NM RESET << contact.get_name() << std::endl;
	std::cout << YELLOW LST_NM RESET << contact.get_last_name() << std::endl;
	std::cout << YELLOW NCK_NM RESET << contact.get_nick() << std::endl;
	std::cout << YELLOW PHO_NBR RESET << contact.get_phone_number() \
	<< std::endl;
	std::cout << YELLOW SECRET RESET << contact.get_secret() << std::endl;
	std::cout << std::endl;
}

// Contact PhoneBook::get_contact(int id)
// {
// 	return (this->_list[id % 8]);
// }

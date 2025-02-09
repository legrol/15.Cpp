/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 21:11:26 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/09 14:37:56 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/collection.hpp"

/**
 * Constructor "PhoneBook::PhoneBook" initializes a PhoneBook object, 
 * setting the initial contact ID to 0 and displaying a welcome banner 
 * and message.
 * 
 * @return void                 No return value. Initializes the PhoneBook 
 *                              object and prints the welcome message.
 * 
 * 
 * 
 * Destructor "PhoneBook::~PhoneBook" destroys the PhoneBook object 
 * and displays a goodbye message upon termination.
 * 
 * @return void                 No return value. Cleans up and prints 
 *                              the goodbye message.
 * 
 * 
 * 
 * The function "PhoneBook::add_contact" adds a new contact to the PhoneBook. 
 * If the PhoneBook already contains 8 contacts, it overwrites the oldest 
 * one. It collects input for the contact's details (name, last name, 
 * nickname, phone number, and darkest secret) and assigns them to the 
 * contact.
 * 
 * @return void                 No return value. Adds a contact to the 
 *                              PhoneBook and manages input interactively.
 * 
 * 
 * The function "PhoneBook::search_contact" allows the user to search for a 
 * contact in the PhoneBook by displaying the existing contacts and prompting 
 * the user to select one. It validates user input and displays the contact's 
 * details if a valid selection is made.
 * 
 * @return void                 No return value. Displays and searches 
 *                              contacts interactively.
 * 
 * 
 * 
 * The function "PhoneBook::print_contact" prints the details of a specific 
 * contact, including the name, last name, nickname, phone number, and 
 * darkest secret. If the contact is empty, it displays an error message.
 * 
 * @param Contact contact       The contact whose details are to be displayed.
 * 
 * @return void                 No return value. Displays the contact's 
 *                              information or an error message if the 
 *                              contact is empty.
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
	{
		std::cout << RED WARNING RESET CYAN << \
		this->_list[this->_id % 8].get_name() << RESET << std::endl;
		std::cout << std::endl;
	}
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:17:05 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/08 23:18:05 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/collection.hpp"

/**
 * The constructor "Contact::Contact" initializes an instance of the 
 * Contact class. It does not perform any specific operations or set 
 * any attributes.
 * 
 * @return void                 No return value.
 * 
 * 
 * 
 * The destructor "Contact::~Contact" cleans up an instance of the 
 * Contact class. It does not perform any specific operations.
 * 
 * @return void                 No return value.
 * 
 * 
 * 
 * The function "get_name" retrieves the name attribute of a Contact 
 * instance.
 * 
 * @return std::string          Returns the name of the contact.
 * 
 * 
 * 
 * The function "get_last_name" retrieves the last name attribute of a 
 * Contact instance.
 * 
 * @return std::string          Returns the last name of the contact.
 * 
 * 
 * 
 * The function "get_nick" retrieves the nickname attribute of a 
 * Contact instance.
 * 
 * @return std::string          Returns the nickname of the contact.
 * 
 * 
 * 
 * The function "get_secret" retrieves the secret attribute of a 
 * Contact instance.
 * 
 * @return std::string          Returns the secret of the contact.
 * 
 * 
 * 
 * The function "get_phone_number" retrieves the phone number attribute 
 * of a Contact instance.
 * 
 * @return std::string          Returns the phone number of the contact.
 * 
 * 
 * 
 * The function "set_name" sets the name attribute of a Contact instance.
 * 
 * @param std::string str       The new name to assign to the contact.
 * 
 * @return void                 No return value. Updates the _name attribute.
 * 
 * 
 * 
 * The function "set_last_name" sets the last name attribute of a 
 * Contact instance.
 * 
 * @param std::string str       The new last name to assign to the contact.
 * 
 * @return void                 No return value. Updates the _last_name 
 *                              attribute.
 * 
 * 
 * 
 * The function "set_nick" sets the nickname attribute of a Contact instance.
 * 
 * @param std::string str       The new nickname to assign to the contact.
 * 
 * @return void                 No return value. Updates the _nick attribute.
 * 
 * 
 * 
 * The function "set_secret" sets the secret attribute of a Contact instance.
 * 
 * @param std::string str       The new secret to assign to the contact.
 * 
 * @return void                 No return value. Updates the _secret 
 *                              attribute.
 * 
 * 
 * 
 * The function "set_phone_number" sets the phone number attribute of a 
 * Contact instance.
 * 
 * @param std::string str       The new phone number to assign to the contact.
 * 
 * @return void                 No return value. Updates the _phone_number 
 *                              attribute.
 * 
 */

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::get_name() const
{
	return (this->_name);
}

std::string Contact::get_last_name() const
{
	return (this->_last_name);
}

std::string Contact::get_nick() const
{
	return (this->_nick);
}

std::string Contact::get_secret() const
{
	return (this->_secret);
}

std::string Contact::get_phone_number() const
{
	return (this->_phone_number);
}

void Contact::set_name(std::string str)
{
	this->_name = str;
}

void Contact::set_last_name(std::string str)
{
	this->_last_name = str;
}

void Contact::set_nick(std::string str)
{
	this->_nick = str;
}

void Contact::set_secret(std::string str)
{
	this->_secret = str;
}

void Contact::set_phone_number(std::string str)
{
	this->_phone_number = str;
}

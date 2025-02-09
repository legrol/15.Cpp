/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 13:39:01 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/08 20:41:48 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "collection.hpp"

class Contact
{
	private:

		std::string	_name;
		std::string	_last_name;
		std::string	_nick;
		std::string	_secret;
		std::string	_phone_number;

	public:

		Contact(void);
		~Contact(void);

		std::string	get_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nick(void) const;
		std::string	get_secret(void) const;
		std::string	get_phone_number(void) const;
		void		set_name(std::string str);
		void		set_last_name(std::string str);
		void		set_nick(std::string str);
		void		set_secret(std::string str);
		void		set_phone_number(std::string str);
};

#endif
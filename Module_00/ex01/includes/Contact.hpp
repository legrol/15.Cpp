/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 13:39:01 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/08 00:00:59 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "../includes/collection.hpp"

class Contact
{
	public:

		Contact(void);
		~Contact(void);

		std::string	get_name(void) const;

	private:

		std::string	_name;
		std::string	_last_name;
		std::string	_nick;
		std::string	_secret;
		std::string	_phone_number;
		




};

#endif
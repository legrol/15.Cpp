/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 21:24:03 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/09 14:37:54 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:

		Contact	_list[8];
		int		_id;
	
	public:
	
		PhoneBook(void);
		~PhoneBook(void);
		
		void	add_contact(void);
		void	print_contact(Contact contact);
		void	print_banner(void);
		void	search_contact(void);
};

#endif
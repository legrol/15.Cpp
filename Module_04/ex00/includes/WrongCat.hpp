/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:52:20 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/01 18:04:47 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
	private:



	public:

	WrongCat(void);
	WrongCat(const WrongCat& copy);
	// Cat(const std::string& name);
	WrongCat &operator=(const WrongCat &origin);
	virtual ~WrongCat();


};

#endif
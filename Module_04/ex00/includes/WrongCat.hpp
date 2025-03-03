/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:52:20 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/02 19:59:23 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:



	public:

		WrongCat(void);
		WrongCat(const WrongCat& copy);
		WrongCat &operator=(const WrongCat &origin);
		~WrongCat();

		void makeSound() const;

};

#endif
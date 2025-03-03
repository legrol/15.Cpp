/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 01:08:20 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/02 21:14:04 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : virtual public Animal
{
	protected:

		std::string ideas;

	public:

		Cat(void);
		Cat(const Cat& copy);
		Cat &operator=(const Cat &origin);
		~Cat();

		virtual void makeSound() const;
};

#endif

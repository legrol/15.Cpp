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

class Cat : public Animal
{
	private:

		Brain* brain;

	public:

		Cat(void);
		Cat(const Cat& copy);
		Cat &operator=(const Cat &origin);
		~Cat();

		void makeSound() const;
		Brain *getBrain(void) const;
		void createCatIdeas(std::string const &idea, int const index);
		void getCatIdeas(int const &index);
};

#endif

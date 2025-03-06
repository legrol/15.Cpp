/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 01:08:20 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/02 21:13:59 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private:

		Brain* brain;
	
	public:

		Dog(void);
		Dog(const Dog& copy);
		Dog &operator=(const Dog &origin);
		~Dog(void);

		void makeSound() const;
		Brain *getBrain(void) const;
		void createDogIdeas(std::string const &idea, int const index);
		void getDogIdeas(int const &index);
};

#endif

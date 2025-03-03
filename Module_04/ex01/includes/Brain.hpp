/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-03 14:25:32 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-03-03 14:25:32 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPPs
# define BRAIN_HPP

# include "Dog.hpp"
# include "Cat.hpp"

class Brain : public Dog, public Cat
{
	private:

		std::string ideas;

	public:
	
		Brain(void);
		Brain(const Brain& copy);
		Brain &operator=(const Brain &origin);
		virtual ~Brain();


};

#endif
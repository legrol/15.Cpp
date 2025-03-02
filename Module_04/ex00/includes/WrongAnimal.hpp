/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:49:32 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/01 18:05:11 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

class WrongAnimal
{
	protected:



	public:
	
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& copy);
	// Cat(const std::string& name);
	WrongAnimal &operator=(const WrongAnimal &origin);
	virtual ~WrongAnimal();


};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:21:58 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/08 22:27:37 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:

		std::string name;
		AMateria *inventory[4];
		AMateria *dropped[MAX_DROPPED];
		int droppedCount;

	public:

		Character(void);
		Character(const std::string& _name);
		Character(const Character &copy);
		Character & operator=(const Character &origin);
		~Character(void);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		bool lookingForMateria(AMateria *mat);

};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:17:37 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/07 21:12:48 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

class Cure : public AMateria
{
	private :


	
	public :

		Cure(void);
		Cure(const Cure &copy);
		Cure &operator=(const Cure &origin);
		~Cure(void);

		AMateria* clone() const;
		void use(ICharacter& target);
};

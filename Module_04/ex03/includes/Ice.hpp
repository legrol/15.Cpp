/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:15:28 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/07 21:13:03 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp" 

class Ice : public AMateria
{
	private :



	public :
		
		Ice(void);
		Ice(const Ice &copy);
		Ice &operator=(const Ice &origin);
		~Ice(void);

		AMateria* clone() const;
		void use(ICharacter& target);
};

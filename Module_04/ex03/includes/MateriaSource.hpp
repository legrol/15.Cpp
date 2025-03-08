/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:21:55 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/08 21:55:22 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:

		AMateria *materias[4];

	public:

		MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		MateriaSource & operator=(const MateriaSource &origin);
		~MateriaSource(void);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);

		bool lookForLearnMateria(AMateria* m);
};

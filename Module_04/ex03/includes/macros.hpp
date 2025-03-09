/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macros.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 01:21:44 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/09 15:02:02 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MACROS_HPP
# define	MACROS_HPP

# define MAX_DROPPED	256

# define ICE_INIT		"* shoots an ice bolt at "
# define ICE_FNL		" *"
# define CURE_INIT		"* heals "
# define CURE_FNL		"'s wounds *"
# define OBJ_CR			" object created."
# define OB_CR_DFB		" object created with base class default constructor."
# define OB_CR_DFD		" object created with default constructor of derived \
class."
# define OB_CR_PR		" object created with parameterized constructor."
# define OBJ_CP			" object copied."
# define OBJ_DT			" object deconstructed."
# define OPR_ASG		" assignment operator called"
# define NM_CH			"Character"
# define NM_MS			"MateriaSource"
# define INV_MA			"Invalid materia!"
# define EQ_SL			" is equiped in slot "
# define NFRESL			"No free slot!"
# define INC_SL			"Incorrect slot number."
# define REMV			" was remove of "
# define SLTFN			" slot."
# define SLTIN			"Slot "
# define ISEMP			" is empty."
# define INSLNB			"Incorrect slot number."
# define CNLINM			"Cannot learn invalid materia"
# define ISLSL			" is learned in slot "
# define LMMFL			"Learn memory is full"
# define CNCRM			"Cannot create materia, "
# define ISINV			" is invalid!"
# define MAEQU			"Materia already equipped!!"
# define NB_ONE			"1. "
# define NB_TWO			"2. "
# define NB_THR			"3. "
# define NB_FOU			"4. "
# define NB_FIV			"5. "
# define TXT_NO			"Create new MateriaSource and learn materias (check \
maximum too):"
# define TXT_NTW		"Create 2 new characters and test deep copy:"
# define TXT_NTH		"Create materias and equip them (also check unknown \
materias):"
# define TXT_FOU		"Check maximum equipped too:"
# define TXT_FIV		"Use materias on new character:"


# endif
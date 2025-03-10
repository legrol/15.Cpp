/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macros.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 01:21:44 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/09 22:10:59 by rdel-olm         ###   ########.fr       */
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
# define CR_PR			" created with parameterized constructor."
# define OBJ_CP			" object copied."
# define OB_CP_DEE		" deep object copy."
# define OB_CP_DFB		" object copied with base class."
# define OB_CP_DER		" object copied with derived class."
# define OBJ_DT			" object deconstructed."
# define OBJ_DT_CC		" object deconstructed with Character class."
# define OBJ_DT_CM		" object deconstructed with MateriaSource class."
# define OBJ_DT_CB		" object deconstructed with base class."
# define OBJ_DT_CD		" object deconstructed with derived class."
# define OPR_ASG		" assignment operator called"
# define OPR_ASG_CB		" assignment operator called with base class."
# define OPR_ASG_CD		" assignment operator called with derived class."
# define OPR_ASG_DE		" deep assignment operator called."
# define NM_CH			"Character "
# define NM_MS			"MateriaSource"
# define INV_MA			"Invalid materia!!!"
# define EQ_SL			" is equiped in slot "
# define NFRESL			"No free slot!"
# define INC_SL			"Incorrect slot number. "
# define REMV			" was remove of "
# define SLTFN			" slot."
# define SLTIN			"Slot "
# define ISEMP			" is empty."
# define INSLNB			"Incorrect slot number."
# define CNLINM			"Cannot learn, invalid materia"
# define ISLSL			" is learned in slot "
# define LMMFL			"Learn memory is full"
# define CNCRM			"Cannot create materia, "
# define ISINV			" is invalid!"
# define MAEQU			"Materia already equipped!!"
# define NB_PARAM		"(Number passed as parameter: "
# define NB_PM_FN		")"
# define NB_ONE			"1. "
# define NB_TWO			"2. "
# define NB_THR			"3. "
# define NB_FOU			"4. "
# define NB_FIV			"5. "
# define TXT_NO			"Create new MateriaSource, learn materias and check \
maximum:"
# define TXT_NTW		"Create 2 new characters and test deep copy:"
# define TXT_NTH		"Create materias and equip them (also check unknown \
materias):"
# define TXT_FOU		"Check maximum equipped too:"
# define TXT_FIV		"Use materias on new character:"
# define SPACES			"   **********************************************   "
# define TEST_OWN		"                     TEST OWN        "


# endif
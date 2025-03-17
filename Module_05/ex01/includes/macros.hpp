/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macros.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 01:21:44 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/17 12:57:54 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MACROS_HPP
# define	MACROS_HPP

# define GRD_MAX	1
# define GRD_MIN	150

# define MSG_EXC		", bureaucrat grade "
# define NM_ANON		"Anonymus"
# define OPR_ASG		" assignment operator called"
# define OB_CP_DEE		" deep object copy."
# define OB_CR_DFD		" object created with default constructor."
# define CR_PR_BU		" created with parameterized constructor (Bureaucrat)."
# define CR_PR_FR		" created with parameterized constructor (Form)."
# define OBJ_CP			" object copied."
# define OBJ_DT			" object deconstructed."
# define LOWEXC			"Error exception🚨: Grade is too low!!  👇"
# define HIGHEXC		"Error exception🚨: Grade is too high!!  👆"
# define CONST			"  ·  ·  ·  Constructors  ·  ·  ·  "
# define GDTHTL			"  ·  ·  ·  Check Grade Too Low && Grade Too High  ·  \
·  ·  "
# define INCDEC1		"  ·  ·  ·  Check increments and decrements outside \
the limits  ·  ·  ·  "
# define INCDEC2		"  ·  ·  ·  Check increments and decrements within \
limits  ·  ·  ·  "
# define TESTFORM1		"  ·  ·  ·  Create a form with signgrade too high  \
·  ·  ·  "
# define TESTFORM2		"  ·  ·  ·  Create form and sign it without exceptions\
 ·  ·  ·  "
# define TESTFORM3		"  ·  ·  ·  Create form and try to sign it but the \
grade is not enough ·  ·  ·  "
# define TESTFORM4		"  ·  ·  ·  Create a form with execgrade too low  \
·  ·  ·  "
# define OPGRD			"  ·  ·  ·  Possible operation with grade  ·  ·  ·  "
# define CHGRD			"The grade of bureaucreat is : "
# define INCGRD			"The grade is INCREASED by reducing it by ONE unit."
# define DECGRD			"The grade is DECREASED by increasing it by ONE unit."
# define GRADE			" created with a grade of "
# define GETGR			" has grade of "
# define AFTINC			" after the increase..."
# define AFTDEC			" after the decrease..."
# define SIGN			" signed "
# define NOSIGN			" couldn’t sign "
# define RASON			", because the reason: "
# define SPACES			"          * * * * * * * * * * * * * * * * * * *  "
# define FOSIGN			" form, signed: "
# define FOGRD			", sign grade: "
# define FOEXEC			", exec grade: "

# endif
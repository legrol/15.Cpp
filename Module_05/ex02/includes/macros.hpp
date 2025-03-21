/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macros.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 01:21:44 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/21 21:35:04 by rdel-olm         ###   ########.fr       */
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
# define CR_PR_FR		" created with parameterized constructor (AForm)."
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
# define NOSIGN			" couldn't sign "
# define RASON			". Rason: "
# define SPACES			"          * * * * * * * * * * * * * * * * * * *  "
# define FOSIGN			" form, signed: "
# define FOGRD			", sign grade: "
# define FOEXEC			", exec grade: "
# define FNOSIG			"Form isn't signed."
# define FEXEC			" has executed the form "
# define PRPAFR			" has been pardoned by Zaphod Beeblebrox."
# define RORENF			" has been robotomized successfully!!"
# define ROREYF			"'s robotomization failed!!"
# define NOOPENF		"Couldn't open output file"
# define EXT			"_shrubbery"
# define SHRU			" successfully created a shrubbery!!!"
# define GARD			"Garden_shrubbery"
# define SLOG			"📄 Contenido del archivo "
# define NOFILE			"❌ Could not open file "
# define POINTS			" :"
# define TEST1			"Create the three forms and some Bureaucrats"
# define TEST2			"Test for running unsigned forms"
# define TEST3			"Signing the form and running the test without sufficient grade"
# define TEST4			"Test sign forms and execute them"
# define STEST41		"               ... Subtest shrubbery ..."
# define STEST42		"               ... Subtest robotomy ..."
# define STEST43		"               ... Subtest pardon ..."

# define OTFL1		"   /\\\n  /  \\\n /    \\\n/______\\\n   ||\n   ||\n   ||"
# define OTFL2		"   ##\n  #  #\n #    #\n########\n   ||\n   ||\n   ||"
# define OTFL3		"  &&&&&\n &&&&&&&\n&&&&&&&&&\n  |||||\n"
# define OTFL4		"   /\\\n  /**\\\n /****\\\n/******\\\n  ||||\n  ||||\n"

# endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:52:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/09 22:22:07 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/Character.hpp"

/**
 * @brief Main file for testing the Materia system.
 *
 * This program tests the MateriaSource, Character, and AMateria system, 
 * following the subject's requirements and additional custom tests to validate
 * memory management and deep copies.
 * 
 * 
 * @brief Test function implementing the subject's test case.
 *
 * This function:
 * - Creates a `MateriaSource` and adds `Ice` and `Cure` Materias.
 * - Creates a `Character` named "me" and equips the created Materias.
 * - Uses the equipped Materias on another `Character` named "bob".
 * - Ensures proper memory management by deleting all dynamically allocated 
 *   objects.
 * 
 * 
 * @brief Additional test function to check memory management and deep copies.
 *
 * This function includes:
 * - Testing MateriaSource with a maximum of four Materias.
 * - Creating and deleting Characters to verify deep copy functionality.
 * - Creating and equipping Materias, checking for unknown types.
 * - Unequipping Materias to verify proper handling of inventory slots.
 * - Using Materias on another Character.
 * - Validating memory cleanup at the end.
 * 
 * 
 * @brief Main function to execute both subject and custom test cases.
 *
 * This function calls `test_subject()` to run the default test case and
 * `test_own()` to execute additional validations.
 *
 * @return EXIT_SUCCESS  Indicates successful execution.
 * 
 */

void test_subject()
{
	std::cout << std::endl;
	IMateriaSource* src = new MateriaSource();
	
	std::cout << std::endl;
	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Cure());

	std::cout << std::endl;
	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	
	std::cout << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl;
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	
	std::cout << std::endl;
	delete bob;
	std::cout << std::endl;
	delete me;
	std::cout << std::endl;
	delete src;
}

void test_own()
{
	std::cout << std::endl << WHITE SPACES RESET << std::endl;
	std::cout << BLUE TEST_OWN RESET << std::endl;
	std::cout << std::endl << GREEN NB_ONE << TXT_NO RESET << std::endl \
	<< std::endl;
	IMateriaSource *src = new MateriaSource();

	std::cout << std::endl;
	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl;
	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl;
	
	AMateria *m = new Cure();
	src->learnMateria(m);

	std::cout << std::endl;
	delete m;
	
	std::cout << std::endl;
	std::cout << GREEN NB_TWO << TXT_NTW RESET << std::endl << std::endl;
	Character *hero0 = new Character("Tyro");
	ICharacter *hero1 = new Character(*hero0);
	std::cout << std::endl;
	delete hero0;
	delete hero1;
	std::cout << std::endl;

	std::cout << GREEN NB_THR << TXT_NTH RESET << std::endl << std::endl;
	AMateria* tmp;
	ICharacter *hero2 = new Character("Lenna");

	tmp = src->createMateria("ice");
	hero2->equip(tmp);
	std::cout << std::endl;

	tmp = src->createMateria("cure");
	hero2->equip(tmp);
	std::cout << std::endl;

	tmp = src->createMateria("poison");
	hero2->equip(tmp);
	std::cout << std::endl;

	delete src;
	std::cout << std::endl;

	std::cout << GREEN NB_FOU << TXT_FOU RESET << std::endl << std::endl;
	AMateria *cure = new Cure();
	AMateria *ice = new Ice();

	std::cout << std::endl;
	hero2->equip(cure);
	hero2->equip(cure);
	std::cout << std::endl;
	hero2->equip(ice);

	std::cout << std::endl;
	hero2->unequip(2);
	hero2->unequip(2);

	std::cout << std::endl;
	hero2->unequip(6);
	std::cout << std::endl;
	
	std::cout << GREEN NB_FIV << TXT_FIV RESET << std::endl << std::endl;
	ICharacter* sefi = new Character("Sefirot");

	hero2->use(0, *sefi);
	hero2->use(1, *sefi);
	std::cout << std::endl;
	hero2->use(2, *sefi);
	std::cout << std::endl;
	hero2->use(6, *sefi);
	hero2->use(-4, *sefi);
	std::cout << std::endl;
	hero2->use(3, *sefi);

	std::cout << std::endl;
	delete sefi;
	std::cout << std::endl;

	delete hero2;
	std::cout << std::endl;
}

int main()
{
	test_subject();
	test_own();
	
	return (EXIT_SUCCESS);
}

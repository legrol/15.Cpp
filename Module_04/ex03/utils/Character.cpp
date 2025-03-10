/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:44:06 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/09 21:55:36 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/AMateria.hpp"

/**
 * @brief Implementation of the `Character` class.
 *
 * The `Character` class represents a playable character in the game. It 
 * implements the `ICharacter` interface, allowing characters to equip, 
 * unequip, and use various types of magical Materia.
 * 
 * 
 * @brief Default constructor for `Character`.
 *
 * Initializes a `Character` with a default name `"someone"` and an empty 
 * inventory.
 * 
 * 
 * @brief Parameterized constructor for `Character`.
 *
 * Initializes a `Character` with a given name, an empty inventory, and 
 * a dropped items tracker.
 *
 * @param _name  				The name of the `Character`.
 * 
 * 
 * @brief Copy constructor for `Character`.
 *
 * Creates a new `Character` instance as a copy of another.
 * It deep copies the inventory to ensure independent memory allocation.
 *
 * @param copy  				A reference to the `Character` object to 
 * 								be copied.
 * 
 * 
 * @brief Overloaded assignment operator `operator=`.
 *
 * Ensures deep copy of the `Character`'s inventory and dropped items when 
 * assigning one `Character` object to another.
 *
 * @param origin  				A reference to the `Character` object being
 * 								assigned.
 * @return Character&  			A reference to the modified `Character` 
 * 								object.
 * 
 * 
 * @brief Destructor for `Character`.
 *
 * Frees all memory allocated for the inventory and dropped items upon 
 * destruction of the `Character` instance.
 * 
 * 
 * @brief Retrieves the name of the `Character`.
 *
 * @return 						A constant reference to the name string.
 * 
 * 
 * @brief Equips an `AMateria` into the character’s inventory.
 *
 * If there is an empty slot, the `AMateria` is stored.
 * If the character already has the materia, or if the inventory is full, 
 * the function provides feedback.
 *
 * @param m  					Pointer to the `AMateria` to be equipped.
 * 
 * 
 * @brief Unequips an `AMateria` from the character’s inventory.
 *
 * If the given index is valid and contains an `AMateria`, it is removed.
 * If the `dropped` array has space, the unequipped `AMateria` is stored 
 * in it. Otherwise, the `AMateria` is deleted.
 *
 * @param idx  					The index of the slot to unequip.
 * 
 * 
 * @brief Uses an equipped `AMateria` on a target `Character`.
 *
 * If the specified index is valid and contains an `AMateria`, it is 
 * activated. Otherwise, a message is displayed indicating an empty slot.
 *
 * @param idx  					The index of the `AMateria` to use.
 * @param target  				The `Character` who will be affected by 
 * 								the `AMateria`.
 * 
 * 
 * @brief Checks if a specific `AMateria` is already equipped.
 *
 * Iterates through the inventory to determine if the `AMateria` is already 
 * present.
 *
 * @param m  					Pointer to the `AMateria` being searched for.
 * @return 						True if the `AMateria` is found, otherwise 
 * 								false.
 * 
 */

Character::Character(void): ICharacter(), name("someone"), inventory()
{
	std::cout << YELLOW NM_CH RESET << CYAN OBJ_CR RESET << std::endl;	
}

Character::Character(const std::string& _name): ICharacter(), name(_name), \
inventory()
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < MAX_DROPPED; i++)
		this->dropped[i] = NULL;
	droppedCount = 0;
	std::cout << YELLOW NM_CH RESET WHITE << this->name << RESET CYAN CR_PR \
	RESET << std::endl << std::endl;
}

Character::Character(const Character &copy): ICharacter(copy), \
name(copy.name), inventory()
{
	for (int i = 0; i < 4; i++)
	{
		if (copy.inventory[i])
			this->inventory[i] = copy.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	for (int i = 0; i < MAX_DROPPED; i++)
		this->dropped[i] = NULL;
	droppedCount = 0;
	std::cout << YELLOW NM_CH RESET << CYAN OB_CP_DEE RESET << std::endl;
}

Character & Character::operator=(const Character &origin)
{
	if (this != &origin)
	{
		this->name = origin.name;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
			{
				delete this->inventory[i];
				this->inventory[i] = NULL;
			}
		}
		for (int i = 0; i < droppedCount; i++)
		{
			if (this->dropped[i])
			{
				delete this->dropped[i];
				this->dropped[i] = NULL;
			}
		}
		droppedCount = 0;
		for (int i = 0; i < 4; i++)
		{
			if (origin.inventory[i])
				this->inventory[i] = origin.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	std::cout << YELLOW NM_CH RESET << CYAN OPR_ASG_DE RESET << std::endl;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete (this->inventory[i]);
	}
	for (int i = 0; i < droppedCount; i++)
	{
		if (this->dropped[i])
			delete this->dropped[i];
	}
	std::cout << YELLOW NM_CH RESET << CYAN OBJ_DT_CC RESET << std::endl;
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << YELLOW NM_CH RESET << CYAN INV_MA RESET << std::endl;
		return ;
	}
	if (this->lookingForMateria(m))
	{
		std::cout << CYAN MAEQU RESET << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			std::cout << RED << m->getType() << RESET CYAN EQ_SL RESET RED << \
			i + 1 << RESET << std::endl;
			return ;
		}		
	}
	std::cout << CYAN NFRESL RESET << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 4 || idx < 0)
	{
		std::cout << CYAN INC_SL NB_PARAM RESET RED << idx << RESET CYAN \
		NB_PM_FN RESET << std::endl;
		return ;
	}
	if (this->inventory[idx])
	{
		std::cout << RED << this->inventory[idx]->getType() <<RESET CYAN REMV \
		RESET RED << idx + 1 << CYAN SLTFN RESET << std::endl;
		if (droppedCount < MAX_DROPPED)
			this->dropped[droppedCount++] = this->inventory[idx];
		else
			delete this->inventory[idx];
		this->inventory[idx] = NULL;
	}
	else
		std::cout << CYAN SLTIN RESET RED << idx + 1 << RESET CYAN ISEMP \
		RESET << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || idx < 0)
	{
		std::cout << CYAN INSLNB NB_PARAM RESET RED << idx << RESET CYAN \
		NB_PM_FN RESET << std::endl;
		return ;
	}
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
	else
		std::cout << CYAN SLTIN RESET RED << idx + 1 << RESET CYAN ISEMP \
		RESET << std::endl;
}

bool Character::lookingForMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if(this->inventory[i] == m)
			return true;
	}
	return (false);
}

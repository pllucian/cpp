/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:12:58 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 23:42:33 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string const& name) : Character()
{
	_name = name;
}

Character::Character(Character const& src) : Character()
{
	*this = src;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

Character&	Character::operator=(Character const& rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
			{
				delete _inventory[i];
				_inventory[i] = NULL;
			}
			if (rhs._inventory[i])
				equip(rhs._inventory[i]->clone());
		}
	}
	return (*this);
}

std::string const&	Character::getName(void) const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (0 <= idx && idx < 4)
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (0 <= idx && idx < 4 && _inventory[idx] != NULL)
		_inventory[idx]->use(target);
}

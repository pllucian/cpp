/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 22:23:56 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/09 00:07:26 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap: Default constructor called\n";
	_name = "Noname";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	return ;
}

ClapTrap::ClapTrap(std::string const name)
{
	std::cout << "ClapTrap: Name constructor called\n";
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
	std::cout << "ClapTrap: Copy constructor called\n";
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap: Destructor called\n";
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& rhs)
{
	std::cout << "ClapTrap: Assignation operator called\n";
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(std::string const& target)
{
	std::cout << "ClapTrap " << _name << " attacked " << target \
		<< " causing " << _attackDamage << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " took " \
		<< amount << " points of damage!\n";
	if (_hitPoints > amount)
		_hitPoints -= amount;
	else
		_hitPoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " was repaired by " \
		<< amount << " hit points!\n";
	_hitPoints += amount;
}

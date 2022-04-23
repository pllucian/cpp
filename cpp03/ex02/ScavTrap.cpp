/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:07:08 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/08 23:50:07 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap: Default constructor called\n";
	_name = "Noname";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string const name)
{
	std::cout << "ScavTrap: Name constructor called\n";
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const& src)
{
	std::cout << "ScavTrap: Copy constructor called\n";
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: Destructor called\n";
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& rhs)
{
	std::cout << "ScavTrap: Assignation operator called\n";
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	ScavTrap::attack(std::string const& target)
{
	std::cout << "ScavTrap " << _name << " attacked " << target \
		<< " causing " << _attackDamage << " points of damage!\n";
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name \
		<< " have enterred in Gate keeper mode\n";
}

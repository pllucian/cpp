/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:48:27 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/09 01:11:30 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap: Default constructor called\n";
	_name = "Noname";
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	return ;
}

DiamondTrap::DiamondTrap(std::string const name)
{
	std::cout << "DiamondTrap: Name constructor called\n";
	_name = name;
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const& src)
{
	std::cout << "DiamondTrap: Copy constructor called\n";
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap: Destructor called\n";
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& rhs)
{
	std::cout << "DiamondTrap: Assignation operator called\n";
	if (this != &rhs)
	{
		_name = rhs._name;
		ClapTrap::_name = rhs._name + "_clap_name";
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap: name = "<< _name \
		<< ", ClapTrap name = " << ClapTrap::_name << std::endl;
}

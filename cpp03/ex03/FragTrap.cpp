/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:31:41 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/08 17:56:53 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap: Default constructor called\n";
	_name = "Noname";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(std::string const name)
{
	std::cout << "FragTrap: Name constructor called\n";
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const& src)
{
	std::cout << "FragTrap: Copy constructor called\n";
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: Destructor called\n";
}

FragTrap&	FragTrap::operator=(FragTrap const& rhs)
{
	std::cout << "FragTrap: Assignation operator called\n";
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	FragTrap::attack(std::string const& target)
{
	std::cout << "FragTrap " << _name << " attacked " << target \
		<< " causing " << _attackDamage << " points of damage!\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " requested high fives\n";
}

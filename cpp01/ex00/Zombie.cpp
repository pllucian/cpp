/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:10:36 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/03 16:25:56 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " died\n";
}

void	Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ...\n";
}

std::string	Zombie::getName(void)
{
	return (_name);
}

void	Zombie::setName(std::string name)
{
	_name = name;
}

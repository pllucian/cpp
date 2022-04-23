/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:48:51 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/10 19:36:24 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal: Default constructor called\n";
	_type = "-";
}

WrongAnimal::WrongAnimal(WrongAnimal const& src)
{
	std::cout << "WrongAnimal: Copy constructor called\n";
	*this = src;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal: Destructor called\n";
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& rhs)
{
	std::cout << "WrongAnimal: Assignation operator called\n";
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "-\n";
}

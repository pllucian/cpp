/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:48:51 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/10 21:05:27 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal: Default constructor called\n";
	_type = "-";
}

Animal::Animal(Animal const& src)
{
	std::cout << "Animal: Copy constructor called\n";
	*this = src;
}

Animal::~Animal(void)
{
	std::cout << "Animal: Destructor called\n";
}

Animal&	Animal::operator=(Animal const& rhs)
{
	std::cout << "Animal: Assignation operator called\n";
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "-\n";
}

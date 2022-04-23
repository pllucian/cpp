/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:10:51 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/10 19:36:07 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog: Default constructor called\n";
	_type = "Dog";
}

Dog::Dog(Dog const& src)
{
	std::cout << "Dog: Copy constructor called\n";
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog: Destructor called\n";
}

Dog&	Dog::operator=(Dog const& rhs)
{
	std::cout << "Dog: Assignation operator called\n";
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Gav!\n";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:10:51 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 15:13:23 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat: Default constructor called\n";
	_type = "Cat";
}

Cat::Cat(Cat const& src)
{
	std::cout << "Cat: Copy constructor called\n";
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat: Destructor called\n";
}

Cat&	Cat::operator=(Cat const& rhs)
{
	std::cout << "Cat: Assignation operator called\n";
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow!\n";
}

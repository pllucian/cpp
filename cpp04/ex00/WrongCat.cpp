/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:10:51 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 15:17:49 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat: Default constructor called\n";
	_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const& src)
{
	std::cout << "WrongCat: Copy constructor called\n";
	*this = src;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: Destructor called\n";
}

WrongCat&	WrongCat::operator=(WrongCat const& rhs)
{
	std::cout << "WrongCat: Assignation operator called\n";
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow!\n";
}

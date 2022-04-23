/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:13:20 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 21:33:23 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	_type = "ice";
}

Ice::Ice(Ice const& src)
{
	*this = src;
}

Ice::~Ice(void)
{
	return ;
}

Ice&	Ice::operator=(Ice const& rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

AMateria*	Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at  " << target.getName() << " *\n";
}

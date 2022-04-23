/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:13:39 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 22:14:31 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	_type = "cure";
}

Cure::Cure(Cure const& src)
{
	*this = src;
}

Cure::~Cure(void)
{
	return ;
}

Cure&	Cure::operator=(Cure const& rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

AMateria*	Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}

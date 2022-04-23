/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:12:30 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 23:14:40 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	return ;
}

AMateria::AMateria(std::string const& type)
{
	_type = type;
}

AMateria::AMateria(AMateria const& src)
{
	*this = src;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria&	AMateria::operator=(AMateria const& rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

std::string const&	AMateria::getType(void) const
{
	return (_type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}

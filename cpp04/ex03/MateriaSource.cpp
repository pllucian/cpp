/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:48:21 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 23:52:43 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& src) : MateriaSource()
{
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i])
			delete _source[i];
	}
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_source[i])
			{
				delete _source[i];
				_source[i] = NULL;
			}
			if (rhs._source[i])
				learnMateria(rhs._source[i]->clone());
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] == NULL)
		{
			_source[i] = m;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] && _source[i]->getType() == type)
			return (_source[i]->clone());
	}
	return (NULL);
}

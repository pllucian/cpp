/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:10:51 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 15:39:17 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat: Default constructor called\n";
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(Cat const& src)
{
	std::cout << "Cat: Copy constructor called\n";
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat: Destructor called\n";
	delete _brain;
}

Cat&	Cat::operator=(Cat const& rhs)
{
	std::cout << "Cat: Assignation operator called\n";
	if (this != &rhs)
	{
		_type = rhs._type;
		if (_brain)
			*_brain = *rhs._brain;
		else
		{
			delete _brain;
			_brain = new Brain(*rhs._brain);
		}
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow!\n";
}

void	Cat::addIdea(std::string idea)
{
	_brain->addIdea(idea);
}

void	Cat::printIdeas(void) const
{
	_brain->printIdeas();
}

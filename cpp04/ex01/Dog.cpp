/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:10:51 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 15:38:30 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog: Default constructor called\n";
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(Dog const& src)
{
	std::cout << "Dog: Copy constructor called\n";
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog: Destructor called\n";
	delete _brain;
}

Dog&	Dog::operator=(Dog const& rhs)
{
	std::cout << "Dog: Assignation operator called\n";
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

void	Dog::makeSound(void) const
{
	std::cout << "Gav!\n";
}

void	Dog::addIdea(std::string idea)
{
	_brain->addIdea(idea);
}

void	Dog::printIdeas(void) const
{
	_brain->printIdeas();
}

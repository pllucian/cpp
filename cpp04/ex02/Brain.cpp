/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 19:59:48 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/10 23:46:32 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain: Default constructor called\n";
}

Brain::Brain(Brain const& src)
{
	std::cout << "Brain: Copy constructor called\n";
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << "Brain: Destructor called\n";
}

Brain&	Brain::operator=(Brain const& rhs)
{
	std::cout << "Brain: Assignation operator called\n";
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

void	Brain::addIdea(std::string idea)
{
	int		i = -1;

	while (++i < 100)
	{
		if (_ideas[i].empty() == true)
		{
			_ideas[i] = idea;
			break ;
		}
	}
}

void	Brain::printIdeas(void) const
{
	for (int i = 0; i < 100; i++)
	{
		if (_ideas[i].empty() == false)
			std::cout << i + 1 << ". " << _ideas[i] << std::endl;
	}
}

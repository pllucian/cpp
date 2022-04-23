/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:56:24 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/20 20:09:10 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : _maxSize(0)
{
	return ;
}

Span::Span(unsigned int const& n) : _maxSize(n)
{
	return ;
}

Span::Span(Span const& src) : _maxSize(src._maxSize)
{
	return ;
}

Span::~Span(void)
{
	return ;
}

Span&	Span::operator=(Span const& rhs)
{
	new (this) Span(rhs);
	return (*this);
}

void	Span::addNumber(int const& num)
{
	if (_array.size() == _maxSize)
		throw std::range_error("Error: Span is full");
	_array.push_back(num);
}

int	Span::shortestSpan(void) const
{
	int									min;
	int									tmp;
	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	it2;

	if (_array.size() < 2)
		throw std::range_error("Error: Span size is less than 2 elements");
	min = std::abs(_array[1] - _array[0]);
	for (it = _array.begin(); it != _array.end(); it++)
	{
		for(it2 = it + 1; it2 != _array.end(); it2++)
		{
			tmp = std::abs(*it2 - *it);
			if (tmp < min)
				min = tmp;
		}
	}
	return (min);
}

int	Span::longestSpan(void) const
{
	int									max;
	int									tmp;
	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	it2;

	if (_array.size() < 2)
		throw std::range_error("Error: Span size is less than 2 elements");
	max = std::abs(_array[1] - _array[0]);
	for (it = _array.begin(); it != _array.end(); it++)
	{
		for(it2 = it; it2 != _array.end(); it2++)
		{
			tmp = std::abs(*it2 - *it);
			if (tmp > max)
				max = tmp;
		}
	}
	return (max);
}

void	Span::fillRange(int const& first, int const& last, int const& step)
{
	int		num = first;

	for (unsigned int i = 0; i < _maxSize && num <= last; i++)
	{
		_array.push_back(num);
		num += step;
	}
}

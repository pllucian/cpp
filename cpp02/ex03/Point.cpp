/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:22:39 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/06 18:33:56 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return ;
}

Point::Point(float const& x, float const& y) : _x(x), _y(y)
{
	return ;
}

Point::Point(Point const& src) : _x(src.getX()), _y(src.getY())
{
	return ;
}

Point::~Point(void)
{
	return ;
}

Point&	Point::operator=(Point const& rvalue)
{
	(void)rvalue;
	return (*this);
}

Fixed	Point::getX(void) const
{
	return (_x);
}

Fixed	Point::getY(void) const
{
	return (_y);
}

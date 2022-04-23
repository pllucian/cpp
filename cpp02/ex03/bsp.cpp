/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:22:49 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/06 18:35:21 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	ab;
	Fixed	bc;
	Fixed	ca;

	ab = (point.getX() - a.getX()) * (b.getY() - a.getY()) \
		- (point.getY() - a.getY()) * (b.getX() - a.getX());
	bc = (point.getX() - b.getX()) * (c.getY() - b.getY()) \
		- (point.getY() - b.getY()) * (c.getX() - b.getX());
	ca = (point.getX() - c.getX()) * (a.getY() - c.getY()) \
		- (point.getY() - c.getY()) * (a.getX() - c.getX());
	if ((ab < 0 && bc < 0 && ca < 0) || (ab > 0 && bc > 0 && ca > 0))
		return (true);
	return (false);
}

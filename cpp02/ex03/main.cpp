/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:29:09 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/06 18:06:10 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	{
		Point	a(0, 0);
		Point	b(0, 42.21f);
		Point	c(42.21f, 0);
		Point	point(5.05f, 5.05f);

		std::cout << "The point is inside the triangle: " \
			<< bsp(a, b, c, point) << std::endl;
	}
	{
		Point	a(0, 0);
		Point	b(0, 42.21f);
		Point	c(42.21f, 0);
		Point	point(42.21f, 42.21f);

		std::cout << "The point is outside the triangle: " \
			<< bsp(a, b, c, point) << std::endl;
	}
	{
		Point	a(0, 0);
		Point	b(0, 42.21f);
		Point	c(42.21f, 0);
		Point	point(0, 42.21f);

		std::cout << "The point is a vertex of the triangle: " \
			<< bsp(a, b, c, point) << std::endl;
	}
	{
		Point	a(0, 0);
		Point	b(0, 42.21f);
		Point	c(42.21f, 0);
		Point	point(0, 5.05f);

		std::cout << "The point is on the edge of the triangle: " \
			<< bsp(a, b, c, point) << std::endl;
	}
	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:22:27 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/06 17:52:16 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>

class Point
{
	public:
		Point(void);
		Point(float const& x, float const& y);
		Point(Point const& src);
		~Point(void);

		Point&	operator=(Point const& rvalue);

		Fixed	getX(void) const;
		Fixed	getY(void) const;
		
	private:
		Fixed const	_x;
		Fixed const	_y;
};

#endif

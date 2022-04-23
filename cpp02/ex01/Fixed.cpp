/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:29:00 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/06 12:44:29 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	_fixedPointValue = 0;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called\n";
	_fixedPointValue = n * (1 << _fractionalBits);
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called\n";
	_fixedPointValue = std::roundf(n * (1 << _fractionalBits));
}

Fixed::Fixed(Fixed const& src)
{
	std::cout << "Copy constructor called\n";
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed&	Fixed::operator=(Fixed const& rvalue)
{
	std::cout << "Assignation operator called\n";
	if (this != &rvalue)
		_fixedPointValue = rvalue.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_fixedPointValue / (1 << _fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (_fixedPointValue / (1 << _fractionalBits));
}

std::ostream&	operator<<(std::ostream& os, Fixed const& rvalue)
{
	os << rvalue.toFloat();
	return (os);
}

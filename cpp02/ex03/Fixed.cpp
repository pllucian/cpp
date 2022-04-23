/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:29:00 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/06 15:15:51 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_fixedPointValue = 0;
}

Fixed::Fixed(int const n)
{
	_fixedPointValue = n * (1 << _fractionalBits);
}

Fixed::Fixed(float const n)
{
	_fixedPointValue = std::roundf(n * (1 << _fractionalBits));
}

Fixed::Fixed(Fixed const& src)
{
	*this = src;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed&	Fixed::operator=(Fixed const& rvalue)
{
	if (this != &rvalue)
		_fixedPointValue = rvalue.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const& rvalue) const
{
	return (_fixedPointValue > rvalue.getRawBits());
}

bool	Fixed::operator<(Fixed const& rvalue) const
{
	return (_fixedPointValue < rvalue.getRawBits());
}

bool	Fixed::operator>=(Fixed const& rvalue) const
{
	return (_fixedPointValue >= rvalue.getRawBits());
}

bool	Fixed::operator<=(Fixed const& rvalue) const
{
	return (_fixedPointValue <= rvalue.getRawBits());
}

bool	Fixed::operator==(Fixed const& rvalue) const
{
	return (_fixedPointValue == rvalue.getRawBits());
}

bool	Fixed::operator!=(Fixed const& rvalue) const
{
	return (_fixedPointValue != rvalue.getRawBits());
}

Fixed	Fixed::operator+(Fixed const& rvalue) const
{
	return (Fixed(toFloat() + rvalue.toFloat()));
}

Fixed	Fixed::operator-(Fixed const& rvalue) const
{
	return (Fixed(toFloat() - rvalue.toFloat()));
}

Fixed	Fixed::operator*(Fixed const& rvalue) const
{
	return (Fixed(toFloat() * rvalue.toFloat()));
}

Fixed	Fixed::operator/(Fixed const& rvalue) const
{
	return (Fixed(toFloat() / rvalue.toFloat()));
}

Fixed&	Fixed::operator++()
{
	_fixedPointValue++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	_fixedPointValue++;
	return (tmp);
}

Fixed&	Fixed::operator--()
{
	_fixedPointValue--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	_fixedPointValue--;
	return (tmp);
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

Fixed&	Fixed::min(Fixed &n1, Fixed &n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed const&	Fixed::min(Fixed const& n1, Fixed const& n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed&	Fixed::max(Fixed &n1, Fixed &n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}

Fixed const&	Fixed::max(Fixed const& n1, Fixed const& n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}

std::ostream&	operator<<(std::ostream& os, Fixed const& rvalue)
{
	os << rvalue.toFloat();
	return (os);
}

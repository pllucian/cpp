/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:28:55 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/06 14:08:45 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int const n);
		Fixed(float const n);
		Fixed(Fixed const& src);
		~Fixed(void);

		Fixed&	operator=(Fixed const& rvalue);
		bool	operator>(Fixed const& rvalue) const;
		bool	operator<(Fixed const& rvalue) const;
		bool	operator>=(Fixed const& rvalue) const;
		bool	operator<=(Fixed const& rvalue) const;
		bool	operator==(Fixed const& rvalue) const;
		bool	operator!=(Fixed const& rvalue) const;
		Fixed	operator+(Fixed const& rvalue) const;
		Fixed	operator-(Fixed const& rvalue) const;
		Fixed	operator*(Fixed const& rvalue) const;
		Fixed	operator/(Fixed const& rvalue) const;
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed&		min(Fixed &n1, Fixed &n2);
		static Fixed const&	min(Fixed const& n1, Fixed const& n2);
		static Fixed&		max(Fixed &n1, Fixed &n2);
		static Fixed const&	max(Fixed const& n1, Fixed const& n2);

	private:
		int					_fixedPointValue;
		static int const	_fractionalBits = 8;
};

std::ostream&	operator<<(std::ostream& os, Fixed const& rvalue);

#endif

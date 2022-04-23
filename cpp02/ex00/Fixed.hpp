/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:28:55 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/05 21:53:46 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const& src);
		~Fixed(void);

		Fixed&	operator=(Fixed const& rvalue);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_fixedPointValue;
		static int const	_fractionalBits = 8;
};

#endif

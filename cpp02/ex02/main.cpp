/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:29:09 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/06 19:12:38 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed			a;
	Fixed const		b(Fixed(5.05f) * Fixed(2));

	std::cout << "a = Fixed(5.05f): " << (a = Fixed(5.05f)) << std::endl;
	std::cout << "\na: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "\na > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;
	std::cout << "\na: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "\na + b: " << (a + b) << std::endl;
	std::cout << "a - b: " << (a - b) << std::endl;
	std::cout << "a * b: " << (a * b) << std::endl;
	std::cout << "a / b: " << (a / b) << std::endl;
	std::cout << "\na: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "\na: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "\na: " << a << std::endl;
	std::cout << "--a: " << --a << std::endl;
	std::cout << "\na: " << a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "\na: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "\nmax(a, b): " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	return (EXIT_SUCCESS);
}

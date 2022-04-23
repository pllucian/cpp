/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:22:11 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/19 01:55:50 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
	Array<int>	a;
	Array<int>	b(5);

	std::cout << "size a = " << a.size() << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << b[i] << " ";
	std::cout << "\n\n";

	int	value = 2;

	for (int i = 0; i < 5; i++)
	{
		b[i] = value;
		value *= 2;
	}
	for (int i = 0; i < 5; i++)
		std::cout << b[i] << " ";
	std::cout << "\n\n";

	Array<int>	c(b);

	for (int i = 0; i < 5; i++)
		std::cout << b[i] << " ";
	std::cout << "\n";
	for (int i = 0; i < 5; i++)
		std::cout << c[i] << " ";
	std::cout << "\n\n";


	for (int i = 0; i < 5; i++)
		b[i] = 21;
	for (int i = 0; i < 5; i++)
		std::cout << b[i] << " ";
	std::cout << "\n";
	for (int i = 0; i < 5; i++)
		std::cout << c[i] << " ";
	std::cout << "\n\n";

	try
	{
		b[-42] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		b[42] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n";

	std::cout << "size b = " << b.size() << "\n";
	std::cout << "size c = " << c.size() << "\n\n";

	Array<int> const	d(b);

	std::cout << d[0] << "\n";
	//d[0] = 42;
	return (EXIT_SUCCESS);
}

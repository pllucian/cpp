/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:22:11 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/18 22:54:43 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template<typename T>
void print(T& value)
{
	std::cout << value << std::endl;
}

int	main(void)
{
	int				a[5] = {0, 1, 2, 3, 4};
	std::string		b[2] = {"Hello", "world!"};

	iter(a, 5, print);
	iter(b, 2, print);
	return (EXIT_SUCCESS);
}

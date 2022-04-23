/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:05:55 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/20 15:46:25 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

int	main(void)
{
	{
		std::list<int>	lst;

		lst.push_back(0);
		lst.push_back(1);
		lst.push_back(21);
		lst.push_back(42);
		
		try
		{
			easyfind(lst, 21);
			std::cout << "21 was found in the lst\n";
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			easyfind(lst, 777);
			std::cout << "777 was found in the lst\n";
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::vector<int>	vect;

		vect.push_back(0);
		vect.push_back(1);
		vect.push_back(21);
		vect.push_back(42);
		
		try
		{
			easyfind(vect, 21);
			std::cout << "21 was found in the vect\n";
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			easyfind(vect, 777);
			std::cout << "777 was found in the vect\n";
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (EXIT_SUCCESS);
}

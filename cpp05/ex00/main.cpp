/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:04:23 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/13 23:07:35 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	bureaucrat("Name", 42);
		bureaucrat.incGrade();
		bureaucrat.decGrade();
		std::cout << bureaucrat << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	bureaucrat("Name", 1);
		bureaucrat.incGrade();
		std::cout << bureaucrat << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	bureaucrat("Name", 150);
		bureaucrat.decGrade();
		std::cout << bureaucrat << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	bureaucrat("Name", 0);
		bureaucrat.decGrade();
		std::cout << bureaucrat << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	bureaucrat("Name", 500);
		bureaucrat.decGrade();
		std::cout << bureaucrat << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}

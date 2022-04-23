/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:04:23 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/14 00:59:09 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Form	form("Document", 42, 42);
		std::cout << form << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form	form("Document", 42, 500);
		std::cout << form << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form	form("Document", 0, 42);
		std::cout << form << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	{
		Bureaucrat	bureaucrat("Name", 42);
		Form		form("Document", 42, 42);
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
	}
	std::cout << std::endl;
	{
		Bureaucrat	bureaucrat("Name", 100);
		Form		form("Document", 42, 42);
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
	}
	return (EXIT_SUCCESS);
}

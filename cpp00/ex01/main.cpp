/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:40:49 by pllucian          #+#    #+#             */
/*   Updated: 2021/11/30 20:05:50 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string		cmd;
	PhoneBook		book;

	while (std::cin)
	{
		std::cout << "Enter one of these commands: ADD, SEARCH or EXIT\n";
		std::cout << "PhoneBook: ";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
			break ;
		else if (cmd == "ADD")
			book.add();
		else if (cmd == "SEARCH")
			book.search();
		else
			std::cout << "Invalid command!\n";
	}
	return (EXIT_SUCCESS);
}

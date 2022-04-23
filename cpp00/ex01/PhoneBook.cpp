/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:18:31 by pllucian          #+#    #+#             */
/*   Updated: 2021/11/30 19:58:18 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_count = 0;
	_index = -1;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::add(void)
{
	std::string		cmd;

	if (++_index > 7)
		_index = 0;
	else if (_count < 8)
		_count++;
	std::cout << "first_name: ";
	std::getline(std::cin, cmd);
	_contacts[_index].set_first_name(cmd);
	std::cout << "last_name: ";
	std::getline(std::cin, cmd);
	_contacts[_index].set_last_name(cmd);
	std::cout << "nickname: ";
	std::getline(std::cin, cmd);
	_contacts[_index].set_nickname(cmd);
	std::cout << "phone_number: ";
	std::getline(std::cin, cmd);
	_contacts[_index].set_phone_number(cmd);
	std::cout << "darkest_secret: ";
	std::getline(std::cin, cmd);
	_contacts[_index].set_darkest_secret(cmd);
}

void	PhoneBook::search(void)
{
	std::string		cmd;
	int				num;

	if (!_count)
	{
		std::cout << "Phone book is empty\n";
		return ;
	}
	_print_book();
	std::cout << "Enter the index of the desired entry: ";
	std::getline(std::cin, cmd);
	if (!cmd.empty() && cmd.find_first_not_of("0123456789") == cmd.npos)
		num = std::stoi(cmd);
	else
	{
		std::cout << "Invalid index!\n";
		return ;
	}
	if (0 < num && num <= _count)
		_print_contact(&_contacts[num - 1]);
	else
		std::cout << "Invalid index!\n";
}

void	PhoneBook::_print_book(void)
{
	int		i;

	std::cout << "|" << std::setw (10) << "Index";
	std::cout << "|" << std::setw (10) << "First name";
	std::cout << "|" << std::setw (10) << "Last name";
	std::cout << "|" << std::setw (10) << "Nickname" << "|\n";
	std::cout << "---------------------------------------------\n";
	i = -1;
	while (++i < _count)
	{
		std::cout << "|" << std::setw (10) << i + 1;
		std::cout << "|" << std::setw (10) \
			<< _get_short_value(_contacts[i].get_first_name());
		std::cout << "|" << std::setw (10) \
			<< _get_short_value(_contacts[i].get_last_name());
		std::cout << "|" << std::setw (10) \
			<< _get_short_value(_contacts[i].get_nickname()) << "|\n";
	}
}

void	PhoneBook::_print_contact(Contact *contact)
{
	std::cout << "First name: " << contact->get_first_name() << std::endl;
	std::cout << "Last name: " << contact->get_last_name() << std::endl;
	std::cout << "Nickname: " << contact->get_nickname() << std::endl;
	std::cout << "Phone number: " << contact->get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << contact->get_darkest_secret() << std::endl;
}

std::string	PhoneBook::_get_short_value(std::string value)
{
	if (value.length() > 10)
	{
		value.erase(10);
		value.replace(9, 1, ".");
	}
	return (value);
}

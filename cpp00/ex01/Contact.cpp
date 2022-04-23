/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 23:33:05 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/01 16:26:25 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string	Contact::get_first_name(void)
{
	return (_first_name);
}

std::string	Contact::get_last_name(void)
{
	return (_last_name);
}

std::string	Contact::get_nickname(void)
{
	return (_nickname);
}

std::string	Contact::get_phone_number(void)
{
	return (_phone_number);
}

std::string	Contact::get_darkest_secret(void)
{
	return (_darkest_secret);
}

void	Contact::set_first_name(std::string value)
{
	_first_name = value;
}

void	Contact::set_last_name(std::string value)
{
	_last_name = value;
}

void	Contact::set_nickname(std::string value)
{
	_nickname = value;
}

void	Contact::set_phone_number(std::string value)
{
	_phone_number = value;
}

void	Contact::set_darkest_secret(std::string value)
{
	_darkest_secret = value;
}

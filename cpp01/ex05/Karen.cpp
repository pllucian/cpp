/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen:.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:48:47 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/04 13:58:05 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::complain(std::string level)
{
	int			i;
	std::string	levelName[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*levelFunc[4])( void ) = \
		{&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};

	i = 0;
	while (levelName[i] != level)
		i++;
	(this->*levelFunc[i])();
}

void	Karen::_debug(void)
{
	std::cout << "Karen DEBUG message\n";
}

void	Karen::_info(void)
{
	std::cout << "Karen INFO message\n";
}

void	Karen::_warning(void)
{
	std::cout << "Karen WARNING message\n";
}

void	Karen::_error(void)
{
	std::cout << "Karen ERROR message\n";
}

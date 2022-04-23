/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 22:24:22 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/09 00:01:09 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	trap0;
	ClapTrap	trap1("Name");
	ClapTrap	trap2(trap0);

	std::cout << "\n";
	trap0.attack("target");
	trap1.takeDamage(2);
	trap2.beRepaired(5);
	std::cout << "\n";
	return (EXIT_SUCCESS);
}

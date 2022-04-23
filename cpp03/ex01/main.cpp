/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 22:24:22 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/09 00:19:50 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	trap0;
	ScavTrap	trap1("Name");
	ScavTrap	trap2(trap0);

	std::cout << "\n";
	trap0.attack("target");
	std::cout << "\n";
	trap1.takeDamage(2);
	trap2.beRepaired(5);
	std::cout << "\n";
	trap0.guardGate();
	std::cout << "\n";
	return (EXIT_SUCCESS);
}

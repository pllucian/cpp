/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 22:24:22 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/09 00:22:36 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	trap0;
	FragTrap	trap1("Name");
	FragTrap	trap2(trap0);

	std::cout << "\n";
	trap0.attack("target");
	std::cout << "\n";
	trap1.takeDamage(2);
	trap2.beRepaired(5);
	std::cout << "\n";
	trap0.highFivesGuys();
	std::cout << "\n";
	return (EXIT_SUCCESS);
}

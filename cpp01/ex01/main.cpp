/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:10:14 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/03 22:26:04 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	hordeZombie = zombieHorde(5, "Zombie");

	for (int i = 0; i < 5; i++)
		hordeZombie[i].announce();
	delete[] hordeZombie;
	return (EXIT_SUCCESS);
}

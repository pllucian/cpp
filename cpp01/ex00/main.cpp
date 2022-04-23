/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:10:14 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/03 16:49:49 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	stackZombie("Stacker");
	Zombie*	heapZombie = newZombie("Heaper");

	stackZombie.announce();
	heapZombie->announce();
	randomChump("Randomer");
	delete heapZombie;
	return (EXIT_SUCCESS);
}

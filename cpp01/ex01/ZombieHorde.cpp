/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:11:08 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/03 16:57:19 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	hordeZombie = new Zombie[N];

	for(int i = 0; i < N; i++)
		hordeZombie[i].setName(name + std::to_string(i + 1));
	return (hordeZombie);
}

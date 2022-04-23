/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:10:51 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/03 17:21:09 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);

		std::string	getName(void);
		void		setName(std::string name);
		void		announce(void);

	private:
		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif

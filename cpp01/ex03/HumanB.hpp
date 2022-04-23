/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:16:25 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/03 19:45:55 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
	public:
		HumanB(std::string const name);
		~HumanB(void);

		void	setWeapon(Weapon& weapon);
		void	attack(void);

	private:
		std::string const	_name;
		Weapon*				_weapon;
};

#endif

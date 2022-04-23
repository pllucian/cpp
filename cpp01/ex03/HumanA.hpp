/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:16:01 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/03 19:35:49 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	public:
		HumanA(std::string const name, Weapon& weapon);
		~HumanA(void);

		void	attack(void);

	private:
		std::string const	_name;
		Weapon&				_weapon;
};

#endif

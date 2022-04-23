/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:15:37 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/04 16:30:36 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);

		std::string const&	getType(void) const;
		void				setType(std::string type);

	private:
		std::string	_type;
};

#endif

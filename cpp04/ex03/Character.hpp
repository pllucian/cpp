/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:30:23 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 20:31:54 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <iostream>

class Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string const& name);
		Character(Character const& src);
		~Character(void);

		Character&	operator=(Character const& rhs);

		std::string const&	getName(void) const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

	private:
		std::string	_name;
		AMateria*	_inventory[4];
};

#endif

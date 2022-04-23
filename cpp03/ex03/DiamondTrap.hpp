/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:48:20 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/09 01:28:24 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string const name);
		DiamondTrap(DiamondTrap const& src);
		~DiamondTrap(void);

		DiamondTrap&	operator=(DiamondTrap const& rhs);

		void	attack(std::string const& target);
		void	whoAmI(void);

	private:
		std::string	_name;
};

#endif

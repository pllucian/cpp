/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:13:12 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 20:45:04 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const& src);
		~Ice(void);

		Ice&	operator=(Ice const& rhs);

		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif

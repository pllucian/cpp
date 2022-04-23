/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:13:31 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 20:34:09 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const& src);
		~Cure(void);

		Cure&	operator=(Cure const& rhs);

		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif

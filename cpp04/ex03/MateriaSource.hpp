/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:48:14 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 23:52:29 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const& src);
		~MateriaSource(void);

		MateriaSource&	operator=(MateriaSource const& rhs);

		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const& type);

	private:
		AMateria*	_source[4];
};

#endif

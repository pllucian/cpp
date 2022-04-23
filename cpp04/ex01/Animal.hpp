/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:48:43 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 00:19:54 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const& src);
		virtual	~Animal(void);

		Animal&	operator=(Animal const& rhs);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;

	protected:
		std::string	_type;
};

#endif

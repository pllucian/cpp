/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:48:43 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/10 19:36:28 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const& src);
		virtual	~WrongAnimal(void);

		WrongAnimal&	operator=(WrongAnimal const& rhs);

		std::string		getType(void) const;
		void			makeSound(void) const;

	protected:
		std::string	_type;
};

#endif

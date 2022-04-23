/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:01:18 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 15:39:45 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const& src);
		virtual	~Cat(void);

		Cat&	operator=(Cat const& rhs);

		void	makeSound(void) const;
		void	addIdea(std::string idea);
		void	printIdeas(void) const;

	private:
		Brain*	_brain = NULL;
};

#endif

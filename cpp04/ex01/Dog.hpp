/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:01:18 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 15:39:33 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const& src);
		virtual	~Dog(void);

		Dog&	operator=(Dog const& rhs);

		void	makeSound(void) const;
		void	addIdea(std::string idea);
		void	printIdeas(void) const;

	private:
		Brain*	_brain = NULL;
};

#endif

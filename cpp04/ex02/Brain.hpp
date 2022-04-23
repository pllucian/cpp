/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 19:57:28 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 00:20:18 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const& src);
		virtual	~Brain(void);

		Brain&	operator=(Brain const& rhs);

		void	addIdea(std::string idea);
		void	printIdeas(void) const;

	private:
		std::string	_ideas[100];
};

#endif

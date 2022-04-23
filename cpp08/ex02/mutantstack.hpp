/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:05:46 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/20 21:46:10 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack<T> const& src);
		~MutantStack(void);

		MutantStack<T>&	operator=(MutantStack<T> const& rhs);

		typedef typename MutantStack<T>::container_type::iterator	iterator;

		iterator	begin(void);
		iterator	end(void);
};

#endif

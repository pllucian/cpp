/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:31:54 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/20 22:03:29 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>()
{
	return ;
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const& src) : std::stack<T>(src)
{
	return ;
}

template<typename T>
MutantStack<T>::~MutantStack(void)
{
	return ;
}

template<typename T>
MutantStack<T>&	MutantStack<T>::operator=(MutantStack<T> const& rhs)
{
	new (this) MutantStack(rhs);
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (this->c.end());
}

template class  MutantStack<int>;

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:05:46 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/20 15:43:42 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template<typename T>
int const&	easyfind(T& array, int value)
{
	typename T::const_iterator	it = std::find(array.begin(), array.end(), value);
	if (it == array.end())
		throw std::runtime_error("Not found value in conteiner");
	return (*it);
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:21:28 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/18 22:24:45 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T1, typename T2, typename T3 = void>
void	iter(T1* array, T2 len, T3 (*foo)(T1&))
{
	for (T2 i = 0; i < len; i++)
		foo(array[i]);
}

#endif

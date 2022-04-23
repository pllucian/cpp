/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:21:28 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/18 20:54:29 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T& a, T& b)
{
	T c = a;
	a = b;
	b = c;
}

template<typename T>
T const& min(T const& a, T const& b)
{
	return ((a < b) ? a : b);
}

template<typename T>
T const& max(T const& a, T const& b)
{
	return ((a > b) ? a : b);
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:21:28 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/19 02:44:06 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const& src);
		~Array(void);

		T&			operator=(Array const& rhs);
		T&			operator[](unsigned int const index);
		T const&	operator[](unsigned int const index) const;

		unsigned int	size(void) const;

	private:
		unsigned int	_n;
		T*				_array;
};

template<typename T>
Array<T>::Array(void) : _n(0), _array(NULL)
{
	return ;
}

template<typename T>
Array<T>::Array(unsigned int n) : _n(n), _array(new T[n])
{
	for (unsigned int i = 0; i < _n; i++)
		_array[i] = 0;
}

template<typename T>
Array<T>::Array(Array const& src) : _n(src._n), _array(new T[src._n])
{
	for (unsigned int i = 0; i < _n; i++)
		_array[i] = src._array[i];
}

template<typename T>
Array<T>::~Array(void)
{
	if (_array)
		delete[] _array;
}

template<typename T>
T&	Array<T>::operator=(Array const& rhs)
{
	new (this) Array(rhs);
	return (*this);
}

template<typename T>
T&	Array<T>::operator[](unsigned int const index)
{
	if (0 <= index && index < _n)
		return (_array[index]);
	throw std::out_of_range("Index out of range");
}

template<typename T>
T const&	Array<T>::operator[](unsigned int const index) const
{
	if (0 <= index && index < _n)
		return (_array[index]);
	throw std::out_of_range("Index out of range");
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return (_n);
}

#endif

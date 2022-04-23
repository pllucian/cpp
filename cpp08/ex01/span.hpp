/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:05:46 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/20 20:07:11 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
	public:
		Span(unsigned int const& n);
		Span(Span const& src);
		~Span(void);

		Span&	operator=(Span const& rhs);

		void	addNumber(int const& num);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
		void	fillRange(int const& first, int const& last, int const& step);

	private:
		Span(void);

		std::vector<int>	_array;
		unsigned int const	_maxSize;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:05:55 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/20 22:29:40 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int	main(void)
{
	MutantStack<int>	mstack;

	mstack.push(1);
	mstack.push(42);
	std::cout << "size = " << mstack.size() << std::endl;
	std::cout << "top = " << mstack.top() << std::endl;
	std::cout << std::endl;

	mstack.pop();
	std::cout << "size = " << mstack.size() << std::endl;
	std::cout << "top = " << mstack.top() << std::endl;

	mstack.push(2);
	mstack.push(3);
	mstack.push(4);
	mstack.push(5);
	mstack.push(6);
	std::cout << std::endl;

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;

	std::stack<int>		mstack2(mstack);

	std::cout << "mstack2 is empty = " << mstack2.empty() << std::endl;
	std::cout << "mstack2 size = " << mstack2.size() << std::endl;
	std::cout << "mstack2 top = " << mstack2.top() << std::endl;
	std::cout << std::endl;

	mstack2.emplace(21);
	std::cout << "mstack2 size = " << mstack2.size() << std::endl;
	std::cout << "mstack2 top = " << mstack2.top() << std::endl;
	std::cout << std::endl;

	mstack2.swap(mstack);
	std::cout << "mstack size = " << mstack.size() << std::endl;
	std::cout << "mstack top = " << mstack.top() << std::endl;
	std::cout << "mstack2 size = " << mstack2.size() << std::endl;
	std::cout << "mstack2 top = " << mstack2.top() << std::endl;
	return (EXIT_SUCCESS);
}

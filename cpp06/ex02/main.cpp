/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:24:04 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/19 02:48:17 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base { public: virtual ~Base(){} };
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate(void)
{
	srand(time(NULL));
	int	i = rand() % 3;

	switch (i)
	{
		case 0:
			std::cout << "generated: A\n";
			return (new A);
		case 1:
			std::cout << "generated: B\n";
			return (new B);
		case 2:
			std::cout << "generated: C\n";
			return (new C);
		default:
			return (NULL);
	}
	return (NULL);
}

void	identify(Base* p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "Identified*: A\n";
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "Identified*: B\n";
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "Identified*: C\n";
}

void	identify(Base& p)
{
	try
	{
		A & tmp = dynamic_cast<A &>(p);
		(void)tmp;
		std::cout << "Identified&: A\n";
	}
	catch (std::bad_cast& e) {}
	try
	{
		B & tmp = dynamic_cast<B &>(p);
		(void)tmp;
		std::cout << "Identified&: B\n";
	}
	catch (std::bad_cast& e) {}
	try
	{
		C & tmp = dynamic_cast<C &>(p);
		(void)tmp;
		std::cout << "Identified&: C\n";
	}
	catch (std::bad_cast& e) {}
}

int	main(void)
{
	Base	*ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:46:51 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/10 19:44:23 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		const Animal*	animal = new Animal();
		const Animal*	dog = new Dog();
		const Animal*	cat = new Cat();

		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		std::cout << animal->getType() << std::endl;
		dog->makeSound();
		cat->makeSound();
		animal->makeSound();
		delete dog;
		delete cat;
		delete animal;
		std::cout << "\n\n";
	}
	{
		const WrongAnimal*	wrongAnimal = new WrongAnimal();
		const WrongAnimal*	wrongCat = new WrongCat();
		const WrongCat*		wrongCat2 = new WrongCat();

		std::cout << wrongCat->getType() << std::endl;
		std::cout << wrongAnimal->getType() << std::endl;
		wrongCat->makeSound();
		wrongAnimal->makeSound();
		wrongCat2->makeSound();
		delete wrongCat;
		delete wrongCat2;
		delete wrongAnimal;
	}
	return (EXIT_SUCCESS);
}

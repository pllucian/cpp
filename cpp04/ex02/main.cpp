/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:46:51 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 15:47:28 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	{
		int				len = 4;
		Animal const*	animals[len];

		for (int i = 0; i < len / 2; i++)
			animals[i] = new Dog();
		for (int i = len / 2; i < len; i++)
			animals[i] = new Cat();
		std::cout << std::endl;
		for (int i = 0; i < len; i++)
			delete animals[i];
		std::cout << "-------------------------------------------\n";
	}
	{
		Dog		dog;
		Dog		dog2 = dog;

		std::cout << std::endl;
		std::cout << "dog ideas:\n";
		dog.printIdeas();
		std::cout << "dog2 ideas:\n";
		dog2.printIdeas();
		std::cout << std::endl;

		std::cout << "dog.addIdea(\"First idea\")\n";
		dog.addIdea("First idea");
		std::cout << std::endl;
		std::cout << "dog ideas:\n";
		dog.printIdeas();
		std::cout << "dog2 ideas:\n";
		dog2.printIdeas();
		std::cout << std::endl;

		std::cout << "dog2 = dog\n";
		dog2 = dog;
		std::cout << "dog ideas:\n";
		dog.printIdeas();
		std::cout << "dog2 ideas:\n";
		dog2.printIdeas();
		std::cout << std::endl;

		std::cout << "dog.addIdea(\"Second idea\")\n";
		dog.addIdea("Second idea");
		std::cout << std::endl;
		std::cout << "dog ideas:\n";
		dog.printIdeas();
		std::cout << "dog2 ideas:\n";
		dog2.printIdeas();
		std::cout << std::endl;

		std::cout << "dog2 = dog\n";
		dog2 = dog;
		std::cout << "dog ideas:\n";
		dog.printIdeas();
		std::cout << "dog2 ideas:\n";
		dog2.printIdeas();
		std::cout << std::endl;
		std::cout << "-------------------------------------------\n";
	}
	{
		Cat		cat;
		Cat		cat2 = cat;

		std::cout << std::endl;
		std::cout << "cat ideas:\n";
		cat.printIdeas();
		std::cout << "cat2 ideas:\n";
		cat2.printIdeas();
		std::cout << std::endl;

		std::cout << "cat.addIdea(\"First idea\")\n";
		cat.addIdea("First idea");
		std::cout << std::endl;
		std::cout << "cat ideas:\n";
		cat.printIdeas();
		std::cout << "cat2 ideas:\n";
		cat2.printIdeas();
		std::cout << std::endl;

		std::cout << "cat2 = cat\n";
		cat2 = cat;
		std::cout << "cat ideas:\n";
		cat.printIdeas();
		std::cout << "cat2 ideas:\n";
		cat2.printIdeas();
		std::cout << std::endl;

		std::cout << "cat.addIdea(\"Second idea\")\n";
		cat.addIdea("Second idea");
		std::cout << std::endl;
		std::cout << "cat ideas:\n";
		cat.printIdeas();
		std::cout << "cat2 ideas:\n";
		cat2.printIdeas();
		std::cout << std::endl;

		std::cout << "cat2 = cat\n";
		cat2 = cat;
		std::cout << "cat ideas:\n";
		cat.printIdeas();
		std::cout << "cat2 ideas:\n";
		cat2.printIdeas();
		std::cout << std::endl;
	}
	return (EXIT_SUCCESS);
}

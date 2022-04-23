/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:04:06 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/11 23:51:07 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	{
		IMateriaSource* src = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		AMateria* tmp;

		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;

		std::cout << "--------------------------\n";
	}
	{
		IMateriaSource*	src = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		Character*		bob = new Character("bob");
		AMateria*		materia1;
		AMateria*		materia2;

		materia1 = src->createMateria("ice");
		bob->equip(materia1);
		materia2 = src->createMateria("cure");
		bob->equip(materia2);

		Character*	copy = new Character(*bob);
	
		std::cout << "bob:\n";
		bob->use(0, *copy);
		bob->use(1, *copy);

		std::cout << "\ncopy:\n";
		copy->use(0, *bob);
		copy->use(1, *bob);

		bob->unequip(0);
		bob->unequip(1);
		copy->equip(materia1);
		copy->equip(materia2);

		std::cout << "\ncopy:\n";
		copy->use(0, *bob);
		copy->use(1, *bob);
		copy->use(2, *bob);
		copy->use(3, *bob);

		delete copy;
		delete bob;
		delete src;
	}
}

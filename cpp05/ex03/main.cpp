/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:04:23 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/14 06:40:27 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern		someRandomIntern;
	Form*		scForm;
	Form*		rrForm;
	Form*		ppForm;
	Form*		otherForm;

	scForm = someRandomIntern.makeForm("shrubbery creation", "Bender");
	rrForm = someRandomIntern.makeForm("robotomy request", "Bender");
	ppForm = someRandomIntern.makeForm("presidential pardon", "Bender");
	otherForm = someRandomIntern.makeForm("other", "Bender");
	std::cout << std::endl;
	if (scForm)
		std::cout << *scForm << std::endl;
	if (rrForm)
		std::cout << *rrForm << std::endl;
	if (ppForm)
		std::cout << *ppForm << std::endl;
	if (otherForm)
		std::cout << *otherForm << std::endl;
	delete scForm;
	delete rrForm;
	delete ppForm;
	delete otherForm;
	return (EXIT_SUCCESS);
}

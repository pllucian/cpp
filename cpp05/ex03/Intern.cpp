/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 02:48:15 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/14 06:39:03 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const& src)
{
	*this = src;
}

Intern::~Intern(void)
{
	return ;
}

Intern&	Intern::operator=(Intern const& rhs)
{
	(void)rhs;
	return (*this);
}

Form*	Intern::makeForm(std::string const& name, std::string const& target)
{
	std::string	names[3] = \
		{
			"shrubbery creation",
			"robotomy request",
			"presidential pardon"
		};
	Form*		(Intern::*forms[3])(std::string const&) = \
		{
			&Intern::makeShrubberyCreationForm,
			&Intern::makeRobotomyRequestForm,
			&Intern::makePresidentialPardonForm
		};
	int			i;

	i = 0;
	while (i < 3 && names[i] != name)
		i++;
	switch (i)
	{
		case 3:
			std::cerr << "Intern does not create " << name << " form\n";
			return (NULL);
		default:
			std::cout << "Intern creates " << names[i] << " form\n";
			return ((this->*forms[i])(target));
	}
}

Form*	Intern::makeShrubberyCreationForm(std::string const& target)
{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::makeRobotomyRequestForm(std::string const& target)
{
	return (new RobotomyRequestForm(target));
}

Form*	Intern::makePresidentialPardonForm(std::string const& target)
{
	return (new PresidentialPardonForm(target));
}

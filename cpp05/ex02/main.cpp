/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:04:23 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/14 02:29:55 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	{
		Bureaucrat				bureaucrat("Name", 150);
		ShrubberyCreationForm	scForm("Target");
		RobotomyRequestForm		rrForm("Target");
		PresidentialPardonForm	ppForm("Target");

		std::cout << bureaucrat << std::endl;
		std::cout << scForm << std::endl;
		std::cout << rrForm << std::endl;
		std::cout << ppForm << std::endl;
		std::cout << std::endl;
		bureaucrat.signForm(scForm);
		bureaucrat.signForm(rrForm);
		bureaucrat.signForm(ppForm);
		std::cout << std::endl;
		bureaucrat.executeForm(scForm);
		bureaucrat.executeForm(rrForm);
		bureaucrat.executeForm(ppForm);
		std::cout << "---------------------------------------\n";
	}
	{
		Bureaucrat				bureaucrat("Name", 145);
		ShrubberyCreationForm	scForm("Target");
		RobotomyRequestForm		rrForm("Target");
		PresidentialPardonForm	ppForm("Target");

		std::cout << bureaucrat << std::endl;
		std::cout << scForm << std::endl;
		std::cout << rrForm << std::endl;
		std::cout << ppForm << std::endl;
		std::cout << std::endl;
		bureaucrat.signForm(scForm);
		bureaucrat.signForm(rrForm);
		bureaucrat.signForm(ppForm);
		std::cout << std::endl;
		bureaucrat.executeForm(scForm);
		bureaucrat.executeForm(rrForm);
		bureaucrat.executeForm(ppForm);
		std::cout << "---------------------------------------\n";
	}
	{
		Bureaucrat				bureaucrat("Name", 137);
		ShrubberyCreationForm	scForm("Target");
		RobotomyRequestForm		rrForm("Target");
		PresidentialPardonForm	ppForm("Target");

		std::cout << bureaucrat << std::endl;
		std::cout << scForm << std::endl;
		std::cout << rrForm << std::endl;
		std::cout << ppForm << std::endl;
		std::cout << std::endl;
		bureaucrat.signForm(scForm);
		bureaucrat.signForm(rrForm);
		bureaucrat.signForm(ppForm);
		std::cout << std::endl;
		bureaucrat.executeForm(scForm);
		bureaucrat.executeForm(rrForm);
		bureaucrat.executeForm(ppForm);
		std::cout << "---------------------------------------\n";
	}
	{
		Bureaucrat				bureaucrat("Name", 72);
		ShrubberyCreationForm	scForm("Target");
		RobotomyRequestForm		rrForm("Target");
		PresidentialPardonForm	ppForm("Target");

		std::cout << bureaucrat << std::endl;
		std::cout << scForm << std::endl;
		std::cout << rrForm << std::endl;
		std::cout << ppForm << std::endl;
		std::cout << std::endl;
		bureaucrat.signForm(scForm);
		bureaucrat.signForm(rrForm);
		bureaucrat.signForm(ppForm);
		std::cout << std::endl;
		bureaucrat.executeForm(scForm);
		bureaucrat.executeForm(rrForm);
		bureaucrat.executeForm(ppForm);
		std::cout << "---------------------------------------\n";
	}
	{
		Bureaucrat				bureaucrat("Name", 45);
		ShrubberyCreationForm	scForm("Target");
		RobotomyRequestForm		rrForm("Target");
		PresidentialPardonForm	ppForm("Target");

		std::cout << bureaucrat << std::endl;
		std::cout << scForm << std::endl;
		std::cout << rrForm << std::endl;
		std::cout << ppForm << std::endl;
		std::cout << std::endl;
		bureaucrat.signForm(scForm);
		bureaucrat.signForm(rrForm);
		bureaucrat.signForm(ppForm);
		std::cout << std::endl;
		bureaucrat.executeForm(scForm);
		bureaucrat.executeForm(rrForm);
		bureaucrat.executeForm(ppForm);
		std::cout << "---------------------------------------\n";
	}
	{
		Bureaucrat				bureaucrat("Name", 25);
		ShrubberyCreationForm	scForm("Target");
		RobotomyRequestForm		rrForm("Target");
		PresidentialPardonForm	ppForm("Target");

		std::cout << bureaucrat << std::endl;
		std::cout << scForm << std::endl;
		std::cout << rrForm << std::endl;
		std::cout << ppForm << std::endl;
		std::cout << std::endl;
		bureaucrat.signForm(scForm);
		bureaucrat.signForm(rrForm);
		bureaucrat.signForm(ppForm);
		std::cout << std::endl;
		bureaucrat.executeForm(scForm);
		bureaucrat.executeForm(rrForm);
		bureaucrat.executeForm(ppForm);
		std::cout << "---------------------------------------\n";
	}
	{
		Bureaucrat				bureaucrat("Name", 5);
		ShrubberyCreationForm	scForm("Target");
		RobotomyRequestForm		rrForm("Target");
		PresidentialPardonForm	ppForm("Target");

		std::cout << bureaucrat << std::endl;
		std::cout << scForm << std::endl;
		std::cout << rrForm << std::endl;
		std::cout << ppForm << std::endl;
		std::cout << std::endl;
		bureaucrat.signForm(scForm);
		bureaucrat.signForm(rrForm);
		bureaucrat.signForm(ppForm);
		std::cout << std::endl;
		bureaucrat.executeForm(scForm);
		bureaucrat.executeForm(rrForm);
		bureaucrat.executeForm(ppForm);
		std::cout << "---------------------------------------\n";
	}
	{
		Bureaucrat				bureaucrat("Name", 1);
		ShrubberyCreationForm	scForm("Target");
		RobotomyRequestForm		rrForm("Target");
		PresidentialPardonForm	ppForm("Target");

		std::cout << bureaucrat << std::endl;
		std::cout << scForm << std::endl;
		std::cout << rrForm << std::endl;
		std::cout << ppForm << std::endl;
		std::cout << std::endl;
		bureaucrat.signForm(scForm);
		bureaucrat.signForm(rrForm);
		bureaucrat.signForm(ppForm);
		std::cout << std::endl;
		bureaucrat.executeForm(scForm);
		bureaucrat.executeForm(rrForm);
		bureaucrat.executeForm(ppForm);
		std::cout << "---------------------------------------\n";
	}
	return (EXIT_SUCCESS);
}

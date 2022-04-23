/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:40:09 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/14 05:59:01 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form()
{
	_target = "";
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) \
	: Form("shrubbery creation", 145, 137)
{
	_target = target;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) \
	: Form(src)
{
	_target = src._target;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs)
{
	new (this) ShrubberyCreationForm(rhs);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	std::ofstream	ofs;

	Form::execute(executor);
	ofs.exceptions(std::ofstream::failbit | std::ofstream::badbit);
	try
	{
		ofs.open(_target + "_shrubbery");
		ofs << "             /\\\n" \
			<< "            <  >\n" \
			<< "             \\/\n" \
			<< "             /\\\n" \
			<< "            /  \\\n" \
			<< "           /++++\\\n" \
			<< "          /  ()  \\\n" \
			<< "          /      \\\n" \
			<< "         /~`~`~`~`\\\n" \
			<< "        /  ()  ()  \\\n" \
			<< "        /          \\\n" \
			<< "       /*&*&*&*&*&*&\\\n" \
			<< "      /  ()  ()  ()  \\\n" \
			<< "      /              \\\n" \
			<< "     /++++++++++++++++\\\n" \
			<< "    /  ()  ()  ()  ()  \\\n" \
			<< "    /                  \\\n" \
			<< "   /~`~`~`~`~`~`~`~`~`~`\\\n" \
			<< "  /  ()  ()  ()  ()  ()  \\\n" \
			<< "  /*&*&*&*&*&*&*&*&*&*&*&\\\n" \
			<< " /                        \\\n" \
			<< "/,.,.,.,.,.,.,.,.,.,.,.,.,.\\\n" \
			<< "           |   |";
		ofs.close();
		std::cout << "File " << _target + "_shrubbery" << " is create\n";
	}
	catch (std::ofstream::failure& e)
	{
		std::cerr << "File " << _target + "_shrubbery" << " is not create\n";
		throw e;
	}
}

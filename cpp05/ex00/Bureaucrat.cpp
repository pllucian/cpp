/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:04:46 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/14 05:08:52 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	_name = "";
	_grade = 150;
}

Bureaucrat::Bureaucrat(std::string const& name)
{
	_name = name;
	_grade = 150;
}

Bureaucrat::Bureaucrat(std::string const& name, int const grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_name = name;
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const& src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_grade = rhs._grade;
	}
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::incGrade(void)
{
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decGrade(void)
{
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}

const char*	Bureaucrat::GradeTooHighException::what(void)const throw()
{
	return ("Grade too hight");
}

const char*	Bureaucrat::GradeTooLowException::what(void)const throw()
{
	return ("Grade too low");
}

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (os);
}

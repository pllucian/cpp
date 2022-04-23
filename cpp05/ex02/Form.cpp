/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:28:38 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/14 06:04:28 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name(""), _gradeToSign(0), _gradeToExec(0)
{
	_signed = false;
}

Form::Form(std::string const& name, \
	int const gradeToSign, int const gradeToExec) \
	: _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (_gradeToSign < 1 || _gradeToExec < 1)
		throw GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExec > 150)
		throw GradeTooLowException();
	_signed = false;
}

Form::Form(Form const& src) : _name(src._name), \
	_gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)
{
	_signed = src._signed;
}

Form::~Form(void)
{
	return ;
}

Form&	Form::operator=(Form const& rhs)
{
	(void)rhs;
	return (*this);
}

std::string	Form::getName(void) const
{
	return (_name);
}

bool	Form::getSigned(void) const
{
	return (_signed);
}

int	Form::getGradeToSign(void) const
{
	return (_gradeToSign);
}

int	Form::getGradeToExec(void) const
{
	return (_gradeToExec);
}

void	Form::beSigned(Bureaucrat const& bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_signed = true;
}

void	Form::execute(Bureaucrat const& executor) const
{
	if (!_signed)
		throw SignedException();
	if (executor.getGrade() > _gradeToExec)
		throw GradeTooLowException();
}

const char*	Form::GradeTooHighException::what(void)const throw()
{
	return ("Grade too hight");
}

const char*	Form::GradeTooLowException::what(void)const throw()
{
	return ("Grade too low");
}

const char*	Form::SignedException::what(void)const throw()
{
	return ("Form not signed");
}

std::ostream&	operator<<(std::ostream& os, Form const& rhs)
{
	os << rhs.getName() << ", signed: " << rhs.getSigned() \
		<< ", grade to sign: " << rhs.getGradeToSign() \
		<< ", grade to exec: " << rhs.getGradeToExec();
	return (os);
}

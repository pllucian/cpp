/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:40:57 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/14 06:00:11 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form()
{
	_target = "";
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& target) \
	: Form("robotomy request", 72, 45)
{
	_target = target;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) \
	: Form(src)
{
	_target = src._target;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs)
{
	new (this) RobotomyRequestForm(rhs);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	static int		i = 0;

	Form::execute(executor);
	if (!(i++ % 2))
		std::cout << _target << " has been robotomized successfully\n";
	else
		std::cerr << _target << " robotomize is a failure\n";
}

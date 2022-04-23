/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:41:27 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/14 06:02:49 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form()
{
	_target = "";
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const& target) \
	: Form("presidential pardon", 25, 5)
{
	_target = target;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) \
	: Form(src)
{
	_target = src._target;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs)
{
	new (this) PresidentialPardonForm(rhs);
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	Form::execute(executor);
	std::cout << _target << " has been pardoned by Zafod Beeblebrox\n";
}

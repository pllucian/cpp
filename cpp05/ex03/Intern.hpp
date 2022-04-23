/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 02:48:12 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/14 05:00:36 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <iostream>

class Form;

class Intern
{
	public:
		Intern(void);
		Intern(Intern const& src);
		~Intern(void);

		Intern&	operator=(Intern const& rhs);

		Form*	makeForm(std::string const& name, std::string const& target);

	private:
		Form*	makeShrubberyCreationForm(std::string const& target);
		Form*	makeRobotomyRequestForm(std::string const& target);
		Form*	makePresidentialPardonForm(std::string const& target);
};

#endif

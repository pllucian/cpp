/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:28:31 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/14 05:20:36 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form
{
	public:
		Form(std::string const& name, \
			int const gradeToSign, int const gradeToExec);
		Form(Form const& src);
		~Form(void);

		Form&	operator=(Form const& rhs);

		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExec(void) const;
		void		beSigned(Bureaucrat const& bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what(void)const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what(void)const throw();
		};

	private:
		Form(void);

		std::string const	_name;
		bool				_signed;
		int	const			_gradeToSign;
		int	const			_gradeToExec;
};

std::ostream&	operator<<(std::ostream& os, Form const& rhs);

#endif

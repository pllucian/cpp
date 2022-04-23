/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:04:38 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/14 05:03:50 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(std::string const& name);
		Bureaucrat(std::string const& name, int const grade);
		Bureaucrat(Bureaucrat const& src);
		~Bureaucrat(void);

		Bureaucrat&	operator=(Bureaucrat const& rhs);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		incGrade(void);
		void		decGrade(void);

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
		Bureaucrat(void);

		std::string	_name;
		int			_grade;

};

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& rhs);

#endif

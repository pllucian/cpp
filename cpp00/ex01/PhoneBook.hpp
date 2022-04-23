/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:18:37 by pllucian          #+#    #+#             */
/*   Updated: 2021/11/30 19:29:43 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);

	void	add(void);
	void	search(void);

private:
	int			_count;
	int			_index;
	Contact		_contacts[8];

	void		_print_book(void);
	void		_print_contact(Contact *contact);
	std::string	_get_short_value(std::string value);
};

#endif

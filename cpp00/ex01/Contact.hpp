/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 23:33:09 by pllucian          #+#    #+#             */
/*   Updated: 2021/11/30 14:34:56 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
public:
	Contact(void);
	~Contact(void);

	std::string		get_first_name(void);
	std::string		get_last_name(void);
	std::string		get_nickname(void);
	std::string		get_phone_number(void);
	std::string		get_darkest_secret(void);
	void			set_first_name(std::string value);
	void			set_last_name(std::string value);
	void			set_nickname(std::string value);
	void			set_phone_number(std::string value);
	void			set_darkest_secret(std::string value);

private:
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_phone_number;
	std::string		_darkest_secret;
};

#endif

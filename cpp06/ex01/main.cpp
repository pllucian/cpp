/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:24:04 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/16 15:54:55 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string	value;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data*		data;
	Data*		data2;
	uintptr_t	tmp;

	data = new Data;
	data->value = "Data value";
	tmp = serialize(data);
	data2 = deserialize(tmp);
	std::cout << data << "\t" << data->value << "\n";
	std::cout << data2 << "\t" << data2->value << "\n";
	delete data;
	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:48:20 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/04 17:35:02 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	karen;

	if (argc != 2)
	{
		std::cout << std::string("Error\n") \
			+ std::string("Enter the following argument:\n") \
			+ std::string("./karenFilter FILTER\n");
		return (EXIT_FAILURE);
	}
	karen.complain(argv[1]);
	return (EXIT_SUCCESS);
}

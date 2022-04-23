/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:24:04 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/16 15:24:32 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <climits>

void	printDouble(double value)
{
	if (value == -std::numeric_limits<double>::infinity())
		std::cout << "double: " << value << "\n";
	else if (value == std::numeric_limits<double>::infinity())
		std::cout << "double: " << value << "\n";
	else if (value == std::numeric_limits<double>::quiet_NaN())
		std::cout << "double: " << value << "\n";
	else if (value == static_cast<long long>(value))
		std::cout << "double: " << static_cast<float>(value) << ".0\n";
	else
		std::cout << "double: " << static_cast<float>(value) << "\n";
}

void	printFloat(double value)
{
	if (value == -std::numeric_limits<float>::infinity())
		std::cout << "float: " << value << "f\n";
	else if (value == std::numeric_limits<float>::infinity())
		std::cout << "float: " << value << "f\n";
	else if (value == std::numeric_limits<float>::quiet_NaN())
		std::cout << "float: " << value << "f\n";
	else if (value == static_cast<long long>(value))
		std::cout << "float: " << static_cast<float>(value) << ".0f\n";
	else
		std::cout << "float: " << static_cast<float>(value) << "f\n";
}

void	printInt(double value)
{
	if (static_cast<long>(value) < INT_MIN \
		|| static_cast<long>(value) > INT_MAX)
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
}

void	printChar(double value)
{
	if (static_cast<int>(value) < CHAR_MIN \
		|| static_cast<int>(value) > CHAR_MAX)
		std::cout << "char: impossible\n";
	else if (!isprint(static_cast<int>(value)))
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: " << static_cast<char>(value) << std::endl;
}

void	printTypes(long double value)
{
	printChar(value);
	printInt(value);
	printFloat(value);
	printDouble(value);
}

int	convert(std::string str)
{
	int		len = str.length();
	char*	endPtr;
	double	num;

	if (!len)
		return (EXIT_FAILURE);
	if (len == 1 && !isdigit(str[0]))
		printTypes(static_cast<double>(str[0]));
	endPtr = NULL;
	num = std::strtold(str.c_str(), &endPtr);
	if (std::string(endPtr) != "" && std::string(endPtr) != "f")
		return (EXIT_FAILURE);
	printTypes(num);
	return (EXIT_SUCCESS);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		errno = EINVAL;
		perror("Error");
		return (EXIT_FAILURE);
	}
	else if (argc > 2)
	{
		errno = E2BIG;
		perror("Error");
		return (EXIT_FAILURE);
	}
	if (convert(argv[1]))
	{
		errno = EINVAL;
		perror("Error");
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

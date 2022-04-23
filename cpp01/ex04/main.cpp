/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 20:22:51 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/04 01:21:16 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

typedef struct s_data
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		oldSTR;
	std::string		newSTR;
}	t_data;

void	exitFunc(t_data *data, std::string error)
{
	if (data->ifs.is_open())
		data->ifs.close();
	if (data->ofs.is_open())
		data->ofs.close();
	if (error.empty())
		exit(EXIT_SUCCESS);
	std::cerr << error << std::endl;
	exit(EXIT_FAILURE);
}

void	initData(t_data *data, int argc, char **argv)
{
	if (argc != 4)
		exitFunc(data, std::string("Error\n") \
			+ std::string("Enter the following arguments:\n") \
			+ std::string("./replace FILENAME STRING1 STRING2"));
	data->oldSTR = argv[2];
	data->newSTR = argv[3];
	if (data->oldSTR.empty() || data->newSTR.empty())
		exitFunc(data, "Error\nArguments must not be empty");
	data->ifs.open(argv[1]);
	if (data->ifs.fail())
		exitFunc(data, std::string(argv[1]) \
			+ std::string(": Error opening file"));
	data->ofs.open(std::string(argv[1]) + ".replace");
	if (data->ofs.fail())
		exitFunc(data, std::string(argv[1]) + ".replace" \
			+ std::string(": Error opening file"));
}

int	main(int argc, char **argv)
{
	t_data			data;
	std::string		line;
	size_t			pos;

	initData(&data, argc, argv);
	while (std::getline(data.ifs, line))
	{
		pos = line.find(data.oldSTR, 0);
		while (pos != std::string::npos)
		{
			line.erase(pos, data.oldSTR.length());
			line.insert(pos, data.newSTR);
			pos += data.newSTR.length();
			pos = line.find(data.oldSTR, pos);
		}
		data.ofs << line << std::endl;
	}
	exitFunc(&data, "");
	return (EXIT_SUCCESS);
}

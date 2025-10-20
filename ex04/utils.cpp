/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:47:42 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/20 17:10:37 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool replace_loop(std::string content, char **argv)
{
	std::ofstream out;
	int i;
	int position;

	out.open((std::string(argv[1]) + ".replace").c_str());
	if (out.fail())
		return (1);
	for (i = 0; i < (int)content.size(); i++)
	{
		position = content.find(argv[2], i);
		if (position != -1 && position == i)
		{
			out << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			out << content[i];
	}
	out.close();
	return (true);
}

bool check_argc(int argc)
{
	if (argc != 4)
	{
		std::cout << "DEBUG: error on argc" << std::endl;
		return (false);
	}
	return (true);

}

std::string parse_args(char **argv)
{
	std::ifstream in;
	std::string result;
	char c;

	in.open (argv[1]);
	if (in.fail())
	{
		std::cout << "DEBUG: error opening file" << std::endl;
		exit(EXIT_FAILURE);
	}
	while(true)
	{
		in >> std::noskipws >> c;

		if (in.eof())
			break;
		result += c;
	}
	in.close();
	std::cout << "DEBUG: deu bom" << std::endl;
	return (result);
}

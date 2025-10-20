/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:47:42 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/20 13:04:20 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool replace_loop(char **av, std::string str);

bool check_argc(int argc)
{
	if (argc != 4)
	{
		std::cout << "DEBUG: error on argc" << std::endl;
		return (false);
	}
	return (true);

}

bool parse_args(char **argv)
{
	std::ifstream in;
	std::string mango;
	char c;

	in.open (argv[1]);
	if (in.fail())
	{
		std::cout << "DEBUG: error opening file" << std::endl;
		return (false);
	}
	while(true)
	{
		in >> std::noskipws >> c;

		if (in.eof())
		{
			break;
		}
		mango += c;
	}
	in.close();
	std::cout << "DEBUG: deu bom" << std::endl;
	return (true);
}

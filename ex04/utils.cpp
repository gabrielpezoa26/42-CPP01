/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:47:42 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/20 14:19:12 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

// bool replace_loop(std::string result, char **argv)
// {
	
// }

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
		{
			break;
		}
		result += c;
	}
	in.close();
	std::cout << "DEBUG: deu bom" << std::endl;
	return (result);
}

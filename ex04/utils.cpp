/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:47:42 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/16 13:48:24 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

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
	std::string file_name = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::fstream fs;
	fs.open (argv[1], std::fstream::in | std::fstream::out | std::fstream::app);

	std::cout << "DEBUG: file=  " << argv[1] << std::endl;
	std::cout << "DEBUG: s1=  " << argv[2] << std::endl;
	std::cout << "DEBUG: s2=  " << argv[3] << std::endl;
	return true;
}

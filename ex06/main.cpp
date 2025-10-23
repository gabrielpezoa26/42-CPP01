/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:06:16 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/23 10:34:43 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl Harl;
	std::string command;

	if (argc != 2)
	{
		std::cout << "invalid argc" << std::endl;
		return 1;
	}
	command = argv[1];
	if (command.empty())
	{
		std::cout << "no empty args!" << std::endl;
		return 1;
	}
	Harl.complain(command);

}

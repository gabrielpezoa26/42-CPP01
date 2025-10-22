/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:12:46 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/22 19:30:05 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl Harl;
	std::string level;

	std::cout << "choose the desired Harl level:" << std::endl;
	std::getline(std::cin, level);


	// Harl.complain("WARNING");
	Harl.complain(level);

}
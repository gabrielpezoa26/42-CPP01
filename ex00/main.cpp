/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:52:00 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/09 16:19:13 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	std::string mango = name;
}

static void printMessage(std::string to_print, int flag)
{
	if (flag == 0)
		std::cout << to_print << std::endl;
	else
		std::cout << to_print;
}

static void debugPrint(std::string identifier, std::string to_debug)
{
	std::cout << "DEBUG: "<< identifier << to_debug << std::endl;
}

int main()
{
	std::string heapZombie;
	std::string stackZombie;

	printMessage("How do you want to name your *Heap*-living zombie? ", 1);
	std::getline(std::cin, heapZombie);

	printMessage("How do you want to name your *Stack*-living zombie? ", 1);
	std::getline(std::cin, stackZombie);
	
	debugPrint( "heap zombie: ", heapZombie);
	debugPrint( "stack zombie: ", stackZombie);
	
	newZombie(heapZombie);
	randomChump(stackZombie);
	// delete heapZombie;
	return 0;
}
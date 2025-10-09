/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:52:00 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/09 17:59:07 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static void printMessage(std::string to_print, int flag)
{
	if (flag == 0)
		std::cout << to_print << std::endl;
	else
		std::cout << to_print;
}

// static void debugPrint(std::string identifier, std::string to_debug)
// {
// 	std::cout << "DEBUG: "<< identifier << to_debug << std::endl;
// }

static void printDelay()
{
	printMessage("manufactoring zombies...", 0);
	// sleep(2);
	// printMessage("...", 0);
	// sleep(3);
	// printMessage("...", 0);
	// sleep(3);
	printMessage("zombies are ready!", 0);
	sleep(2);
}

int main()
{
	std::string heapZombie;
	std::string stackZombie;
	Zombie *zombie_Pointer;

	printMessage("How do you want to name your *Heap*-living zombie? ", 1);
	std::getline(std::cin, heapZombie);

	printMessage("How do you want to name your *Stack*-living zombie? ", 1);
	std::getline(std::cin, stackZombie);

	printDelay();

	zombie_Pointer = newZombie(heapZombie);
	std::cout << "zombie " << heapZombie << " is allocated" << std::endl;
	randomChump(stackZombie);
	delete zombie_Pointer;

	return 0;
}
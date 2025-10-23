/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:52:00 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/23 10:43:57 by gcesar-n         ###   ########.fr       */
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

static void printDelay()
{
	printMessage("manufactoring zombies...", 0);
	sleep(1);
	printMessage("...", 0);
	sleep(1);
	printMessage("...", 0);
	sleep(3);
	printMessage("zombies are ready!\n", 0);
	sleep(2);
}

int main()
{
	std::string heapZombie;
	std::string stackZombie;
	Zombie *zombie_Pointer;
	int i = 0;

	while(1)
	{
		if (i == 2)
			break;
		printMessage("How do you want to name your *Heap*-living zombie? ", 1);
		std::getline(std::cin, heapZombie);
		if (!heapZombie.empty())
			i++;

		printMessage("How do you want to name your *Stack*-living zombie? ", 1);
		std::getline(std::cin, stackZombie);
		if (!stackZombie.empty())
			i++;
	}

	printDelay();
	zombie_Pointer = newZombie(heapZombie);
	randomChump(stackZombie);
	delete zombie_Pointer;
	return 0;
}
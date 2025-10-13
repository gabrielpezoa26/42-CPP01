/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:34:34 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/12 21:21:42 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


static void printMessage(std::string message, int flag);
static int promptAmount();
static std::string promptNames();
static void printDelay();

void printMessage(std::string message, int flag)
{
	if (flag == 1)
		std::cout << message << std::endl;
	else if (flag == 0)
		std::cout << message;
}

static int promptAmount()
{
	std::string zombieAmount;
	int result = 0;

	printMessage(" how many zombies do you want? ", 0);
	getline(std::cin, zombieAmount);
	
	std::stringstream ss(zombieAmount);
	ss >> result;
	if (ss.fail() || result <= 0)
	{
		printMessage("Error! Invalid zombie amount. Exiting program.", 1);
		exit(EXIT_FAILURE);
	}
	return (result);
}

static std::string promptNames()
{
	std::string zombieNames;

	std::cout << " and how do you wanna name them all? ";
	getline(std::cin, zombieNames);
	if (zombieNames.empty())
	{
		printMessage("Error! Empty name. Exiting program.", 1);
		exit(EXIT_FAILURE);
	}
	return (zombieNames);
}

static void printDelay()
{
	printMessage("creating zombies...", 1);
	sleep(2);
	printMessage("...", 1);
	sleep(2);
	printMessage("Zombies ready!\n", 1);
	sleep(2);
}

int main()
{
	std::string names;
	int amount;
	Zombie *horde;

	printMessage("Welcome to zombieFactory!", 0);
	amount = promptAmount();
	names = promptNames();
	printDelay();

	horde = zombieHorde(amount, names);
	delete[] horde;
	return 0;
}

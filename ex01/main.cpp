/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:34:34 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/12 14:12:29 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void printMessage(std::string message)
{
	std::cout << message << std::endl;
}

static int promptAmount()
{
	std::string zombieAmount;
	int result = 0;

	std::cout << "number: ";
	getline(std::cin, zombieAmount);
	result = atoi(zombieAmount.c_str());
	if (result <= 0)
		printMessage("vishhh");
	return (result);
}

static std::string promptNames()
{
	std::string zombieNames;

	std::cout << "names: ";
	getline(std::cin, zombieNames);
	return (zombieNames);
}

int main()
{
	std::string names;
	int amount;
	Zombie *horde;

	amount = promptAmount();
	names = promptNames();
	horde = zombieHorde(amount, names);

	delete[] horde;
	return 0;
}
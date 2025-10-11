/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:34:34 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/11 00:42:51 by gcesar-n         ###   ########.fr       */
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
	std::stringstream ss(zombieAmount);
	ss >> result;
	if (ss.fail() || result <= 0)
		printMessage("vishh\n");
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

	amount = promptAmount();
	names = promptNames();
	zombieHorde(amount, names);  //dar free dps
	return 0;
}
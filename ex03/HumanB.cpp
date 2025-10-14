/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:24:16 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/14 14:01:57 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	std::cout << "DEBUG: constructor B" << std::endl;
	// n recebe a arma
}

HumanB::~HumanB()
{
	std::cout << "DEBUG: destructor B" << std::endl;
}

void HumanB::attack()
{
	class Weapon Weapon;
	std::string name;
	std::string type;

	name = getName();
	type = Weapon.getType();
	
	std::cout << name << " attacks with their " << type << std::endl;
}


void HumanB::setName(std::string new_name)
{
	name = new_name;
}

std::string HumanB::getName() const
{
	return name;
}
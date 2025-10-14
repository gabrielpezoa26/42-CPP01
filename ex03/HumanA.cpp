/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:24:11 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/14 18:02:36 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{
	std::cout << "DEBUG: constructor A" << std::endl;
	//recebe a arma
}

HumanA::~HumanA()
{
	std::cout << "DEBUG: destructor A" << std::endl;
}

void HumanA::attack()
{
	class Weapon Weapon;
	std::string name;
	std::string type;

	name = getName();
	type = Weapon.getType();
	
	std::cout << name << " attacks with their " << type << std::endl;
}

void HumanA::setName(std::string new_name)
{
	name = new_name;
}

std::string HumanA::getName() const
{
	return name;
}
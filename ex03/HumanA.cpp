/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:24:11 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/13 15:48:46 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{
	std::cout << "DEBUG: constructorrrr A" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "DEBUG: destructorrrrr A" << std::endl;
}

void HumanA::attack(std::string name, std::string type)
{
	std::cout << name << " attacks with their " << type << std::endl;
}
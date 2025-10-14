/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:24:23 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/14 13:45:36 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType() const
{
	return type;
}

void Weapon::setType(std::string new_type)
{
	type = new_type;
}


void Weapon::setWeapon(std::string new_weapon)
{
	type = new_weapon;
}
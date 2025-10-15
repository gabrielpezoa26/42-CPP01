/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:24:23 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/14 21:03:33 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& given_type)
{
	this->type = given_type;
}

const std::string& Weapon::getType() const
{
	return this->type;
}

void Weapon::setType(const std::string& new_type)
{
	this->type = new_type;
}

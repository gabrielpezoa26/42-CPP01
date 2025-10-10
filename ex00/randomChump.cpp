/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:52:10 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/10 18:27:48 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << "BraiiiiiiinnnzzzZ\n" << std::endl;
}

void randomChump(std::string name)
{
	Zombie kidZombie(name);

	std::cout << name << ": ";
	kidZombie.announce();
}

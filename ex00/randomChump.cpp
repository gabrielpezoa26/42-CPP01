/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:52:10 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/09 16:20:39 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << "BraiiiiiiinnnzzzZ" << std::endl;
}

void randomChump(std::string name)
{
	Zombie kidZombie(name);

	std::cout << name << ": ";
	kidZombie.announce();
}

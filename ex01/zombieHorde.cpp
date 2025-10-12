/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:37:01 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/12 13:41:43 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
	Zombie *horde;
	horde = new Zombie[N];
	int i = 0;

	while(i < N)
	{
		horde[i].setZombieName(name);
		std::cout << name << ": ";
		horde[i].announce();
		i++;
	}
	return (horde);
}
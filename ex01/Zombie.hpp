/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:34:43 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/12 19:06:15 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <new>
#include <unistd.h>
#include <string>
#include <sstream>

class Zombie
{
	private:
	std::string name;


	public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce(void);
	void setZombieName(std::string given_name);
};

Zombie *zombieHorde( int N, std::string name );


#endif
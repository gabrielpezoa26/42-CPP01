/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:24:14 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/13 15:49:12 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
	private:
	// Weapon() Weapon;
	std::string name;
	void attack(std::string name, std::string type);


	public:
	HumanA();
	~HumanA();
	std::string getName();
	void setName(std::string new_name);
};

#endif

/*
	Elas também têm uma função membro attack() que exibe (sem os colchetes angulares):

		<name> attacks with their <tipo de arma>
		
		HumanA e HumanB são quase idênticas, exceto por esses dois pequenos detalhes:
			• Enquanto HumanA recebe a Weapon em seu construtor, HumanB não.
			• HumanB pode nem sempre ter uma arma, enquanto HumanA sempre sempre
			estará armado.
*/
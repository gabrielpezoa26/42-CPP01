/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:24:18 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/14 19:33:02 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	private:
	std::string name;
	Weapon *weapon;
	
	
	public:
	HumanB(const std::string& name);
	~HumanB();

	void setWeapon(Weapon& weapon);
	void attack();
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
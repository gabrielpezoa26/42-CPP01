/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:24:25 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/13 19:25:04 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
	private:
	std::string type;

	
	public:
	std::string getType() const;
	void setType(std::string new_type);
};




#endif

/*
	Implemente uma classe Weapon que tenha:
			• Um atributo privado type, que é uma string.
			• Uma função membro getType() que retorna uma referência constante a type.
			• Uma função membro setType() que define type usando o novo valor passado como
		um parâmetro.
*/
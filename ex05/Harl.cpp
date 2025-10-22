/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:44:42 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/22 08:25:01 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	
}

Harl::~Harl()
{
	
}

void Harl::debug(void)
{
	std::cout << "Eu amo ter bacon extra para o meu hambúrguer"
	"7XL-duplo-queijo-triplopicles-ketchup-especial."
	" Eu realmente amo!" << std::endl;
}

//arrumar espaçamento do baguio
void Harl::info(void)
{
	std::cout << "Eu não acredito que adicionar bacon extra custa mais dinheiro. Vocês \
não colocaram bacon suficiente no meu hambúrguer! Se vocês tivessem colocado, eu \
não estaria pedindo por mais!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "Eu acho que mereço ter bacon extra de graça. Eu venho aqui há anos, \
enquanto você começou a trabalhar aqui apenas no mês passado." << std::endl;
}

void Harl::error(void)
{
	std::cout << "Isto é inaceitável! Eu quero falar com o gerente agora." << std::endl;
}

// arrumar
void Harl::complain(std::string level)
{
	if (level == "DEBUG")
		debug();
	else if (level == "INFO")
		info();
	else if (level == "WARNING")
		warning();
	else if (level == "ERROR")
		error();
}

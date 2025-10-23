/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:44:42 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/23 10:33:09 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() { }

Harl::~Harl() { }

void Harl::debug(void)
{
	std::cout << " [DEBUG]" << std::endl;
	std::cout << "Eu amo ter bacon extra para o meu hambúrguer "
	"7XL-duplo-queijo-triplopicles-ketchup-especial. "
	" Eu realmente amo!\n" << std::endl;
}

void Harl::info(void)
{
	std::cout << " [INFO]" << std::endl;
	std::cout << "Eu não acredito que adicionar bacon extra custa mais dinheiro. Vocês "
	"não colocaram bacon suficiente no meu hambúrguer! Se vocês tivessem colocado, eu "
	"não estaria pedindo por mais!\n" << std::endl;
}

void Harl::warning(void)
{
	std::cout << " [WARNING]" << std::endl;
	std::cout << "Eu acho que mereço ter bacon extra de graça. Eu venho aqui há anos, "
	"enquanto você começou a trabalhar aqui apenas no mês passado.\n" << std::endl;
}

void Harl::error(void)
{
	std::cout << " [ERROR]" << std::endl;
	std::cout << "Isto é inaceitável! Eu quero falar com o gerente agora.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	void		(Harl::*ptrToComplain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels_array[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (int i = 0; i < 4; i++)
	{
		if (levels_array[i] == level)
		{
			(this->*ptrToComplain[i])();
			break ;
		}
	}
}

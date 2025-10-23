/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:16:55 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/23 10:31:57 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() { }

Harl::~Harl() { }

void Harl::debug(void)
{
	std::cout << " [DEBUG]" << std::endl;
	std::cout << "Eu amo ter bacon extra para o meu hambúrguer "
	"7XL-duplo-queijo-triplopicles-ketchup-especial."
	" Eu realmente amo!" << std::endl;
}

void Harl::info(void)
{
	std::cout << " [INFO]" << std::endl;
	std::cout << "Eu não acredito que adicionar bacon extra custa mais dinheiro. Vocês "
	"não colocaram bacon suficiente no meu hambúrguer! Se vocês tivessem colocado, eu "
	"não estaria pedindo por mais!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << " [WARNING]" << std::endl;

	std::cout << "Eu acho que mereço ter bacon extra de graça. Eu venho aqui há anos, "
	"enquanto você começou a trabalhar aqui apenas no mês passado." << std::endl;
}

void Harl::error(void)
{
	std::cout << " [ERROR]" << std::endl;
	std::cout << "Isto é inaceitável! Eu quero falar com o gerente agora." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels_array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = 0;
	
	while(index < 4)
	{
		if (levels_array[index] == level)
			break ;
		index++;
	}
	switch (index)
	{
		case 0:
			debug();
			info();
			warning();
			error();
			break ;
		case 1:
			info();
			warning();
			error();
			break ;
		case 2:
			warning();
			error();
			break ;
		case 3:
			error();
			break ;
		default:
			std::cout << "Please insert a valid command" << std::endl;
			break ;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:16:31 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/13 13:24:36 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string variable = "HI THIS IS BRAIN";
	std::string *stringPTR = &variable;
	std::string &stringREF = variable;

	std::cout << "Adresses: " << std::endl;
	std::cout << "Memory adress of string: " << &variable << std::endl;
	std::cout << "Memory adress of stringPTR: " << &stringPTR << std::endl;
	std::cout << "Memory adress of stringREF: " << &stringREF << std::endl;
	std::cout << "-----------------------\n" << std::endl;


	std::cout << "Values: " << std::endl;
	std::cout << "Value of string is: " << variable << std::endl;
	std::cout << "Value of stringPTR is: " << stringPTR << std::endl;
	std::cout << "Value of stringREF is: " << stringREF << std::endl;
	
	return 0;
}

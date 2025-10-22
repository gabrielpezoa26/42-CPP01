/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:06:52 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/22 19:19:08 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

Class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	
	public:
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif
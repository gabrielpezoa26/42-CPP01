/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:00:37 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/23 10:47:13 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main(int argc, char **argv)
{
	std::string content;

	if (!check_argc(argc))
		return (1);
	content = parse_args(argv);
	replace_loop(content, argv);
	return (0);
	
}

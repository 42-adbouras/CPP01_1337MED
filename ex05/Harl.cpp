/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:46:20 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/16 22:44:11 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

const std::string	g_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

void	Harl::debug( void ) {
	std::cout << DEBUG << std::endl;
}

void	Harl::info( void ) {
	std::cout << INFO << std::endl;
}

void	Harl::warning( void ) {
	std::cout << WARNING << std::endl;
}

void	Harl::error( void ) {
	std::cout << ERROR << std::endl;
}

void	Harl::complain( std::string level )
{
	void	(Harl::*levelPtr[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++) {
		if (g_levels[i] == level) {
			(this->*levelPtr[i])();
			return ;
		}
	}
	std::cout << "[ UNKNOWN LEVEL ]" << std::endl;
}

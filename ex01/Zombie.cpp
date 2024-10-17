/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:55:15 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/17 11:53:59 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

str		Zombie::get_name( void ) { return (name); }

void	Zombie::set_name( str name ) { this->name = name; }

void	Zombie::announce( int i ) {
	std::cout << get_name();
	std::cout << "[" << std::setw(3) << std::setfill('0') << i << "]";
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie( void )  {
	static int nb;
	
	std::cout << name;
	std::cout << "[" << std::setw(3) << std::setfill('0') << ++nb << "]: ";
	std::cout << "Bit the dust!" << std::endl; 
}

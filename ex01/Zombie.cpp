/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:55:15 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/28 12:57:28 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( int i )
{
	std::cout << get_name();
	std::cout << "[" << i << "]";
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

str		Zombie::get_name( void ) { return (name); }
void	Zombie::set_name( str name ) { this->name = name; }
Zombie::~Zombie( void ) 
{
	static int nb;
	
    std::cout << name;
	std::cout << "[" << ++nb << "]: ";
	std::cout << "Bit the dust!" << std::endl; 
}

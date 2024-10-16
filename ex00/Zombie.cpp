/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:40:12 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/16 13:24:19 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void ) {
	std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

str	Zombie::get_name( void ) { return (name); }

Zombie::Zombie( str name ) { this->name = name; }

Zombie::~Zombie( void ) {
	std::cout << get_name() << ": Bit the dust!" << std::endl;
}

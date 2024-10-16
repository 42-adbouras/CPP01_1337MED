/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:24:32 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/16 13:29:17 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/HumanB.hpp"

void	HumanB::attack( void ) { 
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanB::HumanB( str name ) {
	this->_name = name;
}

void	HumanB::setWeapon( Weapon& weapon ) {
	this->_weapon = &weapon;
}

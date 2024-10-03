/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:53:56 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/03 11:06:08 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/HumanA.hpp"

void	HumanA::attack( void )
{ 
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::HumanA( str name, Weapon &weapon) : _name(name), _weapon(weapon) {};

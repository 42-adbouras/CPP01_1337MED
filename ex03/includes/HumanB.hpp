/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:49:40 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/17 12:13:28 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB {
public:
	void	attack( void );
	void	setWeapon( Weapon& weapon );
	HumanB	( str name );
private:
	str		_name;
	Weapon	*_weapon;
};

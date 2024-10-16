/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:42:27 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/16 13:31:37 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Weapon.hpp"

const str&	Weapon::getType() const { return (type); }

void		Weapon::setType( str type )	{ this->type = type	; }

Weapon::Weapon( str type) { setType(type); }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:42:27 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/17 12:14:58 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Weapon.hpp"

Weapon::Weapon( str type) { setType(type); }

const str&	Weapon::getType() const { return (type); }

void		Weapon::setType( str type )	{ this->type = type	; }

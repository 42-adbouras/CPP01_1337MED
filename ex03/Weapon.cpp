/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:42:27 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/03 11:01:06 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Weapon.hpp"

const str&	Weapon::getType() const { return (type); }
void				Weapon::setType( str type )	{ this->type = type	; }
Weapon::Weapon( str type) { setType(type); }

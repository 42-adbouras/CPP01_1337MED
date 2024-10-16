/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:42:54 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/16 13:30:17 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

typedef std::string	str;

class Weapon
{
public:
	const str&	getType() const;
	void		setType( str type );
	Weapon		(){};
	Weapon		( str type );
private:
	str			type;
};

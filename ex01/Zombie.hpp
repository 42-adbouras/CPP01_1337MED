/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:34:54 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/28 12:58:51 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>


typedef std::string	str;

class Zombie
{
public:
	void	announce( int i);
	str		get_name( void );
	void	set_name( str name );
	Zombie			( void ) { };
	Zombie			(str name);
	~Zombie			( void );
private:
	str	name;	
};

Zombie* zombieHorde( int N, std::string name );
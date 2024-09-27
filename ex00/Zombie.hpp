/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:27:50 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/27 18:16:07 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

typedef std::string str;

class Zombie
{
public:
	void	announce( void );
	str		get_name( void );
	Zombie			( void ){};
	Zombie			(str name);
	~Zombie			( void );
private:
	std::string	name;	
};

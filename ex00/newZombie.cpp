/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:35:51 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/14 13:52:02 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( str name )
{
	Zombie* _new;

	_new = new Zombie(name);
	if (_new == nullptr)
		std::cerr << "bad_alloc" << std::endl;
	return (_new);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:43:08 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/15 13:59:51 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int nb, std::string name )
{
	Zombie* zombies;

	zombies = new Zombie[nb];
	for (int i = 0; i < nb; i++)
		zombies[i].set_name(name);
	return (zombies);
}

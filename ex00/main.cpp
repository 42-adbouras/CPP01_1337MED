/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:18:19 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/27 18:30:17 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie* _new;
	_new = newZombie("Adam");
	_new->announce();
	randomChump("Bouras");
	delete _new;
	return (0);
}

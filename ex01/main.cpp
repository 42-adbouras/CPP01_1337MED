/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:27:28 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/17 11:50:26 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static void	announce_hord( Zombie* horde, int nbHord );

int	main( int ac, char **av ) {

	int		nbHord;
	str		name;
	Zombie	*horde;

	nbHord = atoi(av[1]);
	if (ac > 1 && nbHord > 0) {
		name = "unamedHorde";
		if (av[2])
			name = av[2];
		horde = zombieHorde(nbHord, name);
		announce_hord(horde, nbHord);
		delete []horde;
	}
	else
		std::cout << "The World Is A Better Place." << std::endl;
}

static void	announce_hord( Zombie* horde, int nbHord ) {
	for (int i = 0; i < nbHord; i++) {
		horde[i].announce(i + 1);
	}
}

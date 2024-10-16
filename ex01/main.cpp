/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:27:28 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/18 19:54:57 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static void	announce_hord( Zombie* horde, int nbHord );
static bool	is_digits(const char* str);

int	main( int ac, char **av ) {

	int		nbHord;
	str		name;
	Zombie	*horde;

	if (ac > 1 && is_digits(av[1]) && (nbHord = atoi(av[1])) > 0) {
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

static bool is_digits(const char* str) {
    while (*str) {
        if (!std::isdigit(*str)) {
			std::cerr << "[" << str << "] is not a valid digit!" << std::endl;
            return false;
		}
        str++;
    }
    return true;
}

static void	announce_hord( Zombie* horde, int nbHord ) {
	for (int i = 0; i < nbHord; i++) {
		horde[i].announce(i + 1);
	}
}

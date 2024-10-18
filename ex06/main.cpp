/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:18:49 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/17 14:20:43 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static void	argError( void );
static int	get_level( str arg );
str	g_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

int	main( int ac, char **av ) {

	Harl	harl;
	int		level;

	if (ac != 2)
		argError();
	level = get_level(av[1]);
	switch (level) {
	case 0 :
		harl.complain("DEBUG");
	case 1 :
		harl.complain("INFO");
	case 2 :
		harl.complain("WARNING");
	case 3 :
		harl.complain("ERROR");
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problem. ]" << std::endl;
	}
}

static void	argError( void ) {
	std::cout << "./harlFilter <LEVEL>" << std::endl;
	exit(1);
}

static int	get_level( str arg ) {
	if (arg.empty())
		return (-1);
	for (int i = 0; i < 4; i++) {
		if (arg == g_levels[i])
			return (i);
	}
	return (-1);
}

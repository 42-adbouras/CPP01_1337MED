/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:11:18 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/16 19:49:06 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	ft_replace( std::string& line, char *arg, char *replace );

int	main( int ac, char **av )
{
	std::ifstream	surcFile(av[1]);
	std::string		line;

	if (ac != 4)
		std::cout << "Invalide Agruments!" << std::endl;
	else {

		if (!surcFile) {
			std::cerr << "Unable to open " << av[1] << std::endl;
			return (1);
		}
		std::ofstream	destFile(std::string(av[1]) + ".replace");
		if (!destFile) {
			std::cerr << "Unable to open " << av[1] << ".replace" << std::endl;
			return (2);
		}
		while (getline(surcFile, line)) {
			destFile << ft_replace(line, av[2], av[3]) << std::endl;
		}
		surcFile.close();
		destFile.close();
	}
}

std::string	ft_replace( std::string& line, char *arg, char *replace )
{
	std::string newLine;

	for (size_t i = 0; i < line.size(); i++)
	{
		if (line.substr(i, strlen(arg)) == arg) {
			newLine += replace;
			i += strlen(arg) - 1;
		} else {
			newLine += line[i];
		}
	}
	return (newLine);
}

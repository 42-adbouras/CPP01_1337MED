/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:11:18 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/03 14:50:52 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char **av)
{
	std::ifstream	surcFile(av[1]);
	std::ofstream	destFile(std::string(av[1]) + ".replace");
	std::string		line;

	if (ac != 4)
		std::cout << "Invalide Agruments!" << std::endl;
	else {
		if (!surcFile) {
			std::cerr << "Unable to open " << av[1] << std::endl;
			return (1);
		}
		if (!destFile) {
			std::cerr << "Unable to open " << "file.replace" << std::endl;
			return (1);
		}
		// while (getline(surcFile, line))
		// 	destFile << line << std::endl;
		while (getline(surcFile, line)) {
            std::string newLine;
            for (size_t i = 0; i < line.size(); ++i) {
                if (line.substr(i, strlen(av[2])) == av[2]) {
                    newLine += av[3];
                    i += strlen(av[2]) - 1;
                } else {
                    newLine += line[i];
                }
            }
            destFile << newLine << std::endl;
        }
		surcFile.close();
		destFile.close();
	}
}

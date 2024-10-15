/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:09:01 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/15 15:26:32 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main( void )
{
	std::string	str			= "HI THIS IS BRAIN";
	std::string	*stringPTR	= &str;
	std::string	&stringREF	= str;

	std::cout << &str		<< std::endl;
	std::cout << stringPTR	<< std::endl;
	std::cout << &stringREF	<< std::endl;

	std::cout << str		<< std::endl;
	std::cout << *stringPTR	<< std::endl;
	std::cout << stringREF	<< std::endl;
}

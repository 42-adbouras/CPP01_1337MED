/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:18:46 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/14 11:42:40 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>

#define DEBUG	"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!"
#define INFO	"I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNING	"I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month."
#define ERROR	"This is unacceptable! I want to speak to the manager now."

typedef std::string str;

extern str	g_levels[4];

class	Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	void complain( str level );
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:42:56 by vimazuro          #+#    #+#             */
/*   Updated: 2026/01/05 15:31:27 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void)
{
	std::cout	<< "I love having extra bacon for my\n"
				<< "7XL-double-cheese-triple-pickle-specialketchup "
				<< "burger.\nI really do!\n"
				<< std::endl;
}

void Harl::info(void)
{
	std::cout	<< "I cannot believe adding extra bacon costs more money.\n"
				<< "You didn't put enough bacon in my burger!\n"
				<< "If you did, I wouldn't be asking for more!\n"
				<< std::endl;
}

void Harl::warning(void)
{
	std::cout	<< "I think I deserve to have some extra bacon for free.\n"
				<< "I've been coming for years, "
				<< "whereas you started working here just last month.\n"
				<< std::endl;
}

void Harl::error(void)
{
	std::cout	<< "This is unacceptable! I want to speak to the manager now.\n"
				<< std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*funcs[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error 
	};
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int levelIndex = -1;
	for (int j = 0; j < 4; j++)
	{
		if (levels[j] == level)
		{
			levelIndex = j;
			break;
		}
	}
	switch (levelIndex)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*funcs[0])();
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			(this->*funcs[1])();
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*funcs[2])();
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*funcs[3])();
			break;
		default:
			std::cout << BLUE << "[ Probably complaining about insignificant problems ]" 
			<< RESET << std::endl;
	}
}

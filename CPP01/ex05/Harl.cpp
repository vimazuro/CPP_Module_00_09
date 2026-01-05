/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:28:39 by vimazuro          #+#    #+#             */
/*   Updated: 2026/01/05 12:57:33 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void)
{
	std::cout	<< MAGENTA << "I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-specialketchup "
				<< "burger. I really do!" << RESET
				<< std::endl;
}

void Harl::info(void)
{
	std::cout	<< MAGENTA << "I cannot believe adding extra bacon costs more money. "
				<< "You didn't put enough bacon in my burger! "
				<< "If you did, I wouldn't be asking for more!"
				<< RESET << std::endl;
}

void Harl::warning(void)
{
	std::cout	<< MAGENTA << "I think I deserve to have some extra bacon for free. "
				<< "I've been coming for years, "
				<< "whereas you started working here just last month."
				<< RESET << std::endl;
}

void Harl::error(void)
{
	std::cout	<< MAGENTA << "This is unacceptable! I want to speak to the manager now."
				<< RESET << std::endl;
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
	int i = 0;
	for (; i < 4; i++)
	{
		if (levels[i] == level)
			break;
	}
	if (i < 4)
		(this->*funcs[i])();
	else
		std::cerr << RED << "Unknown level: " << GREEN << level << RESET << std::endl;
}

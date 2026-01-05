/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:27:54 by vimazuro          #+#    #+#             */
/*   Updated: 2026/01/05 14:34:35 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc > 2)
	{
		std::cerr << "Usage: \n";
		std::cerr << std::left << std::setw(23)
		<< (std::string(GREEN) + "./Harl [LEVEL]" + RESET)
		<< " run once with a specific level" << std::endl;
		std::cerr << std::left << std::setw(23)
		<< (std::string(GREEN) + "./Harl" + RESET)
		<< " interactive mode" << std::endl;
		return 1;
	}
	if (argc == 2)
	{
		harl.complain(argv[1]);
		return 0;
	}

	std::string level;

	std::cout << "Available levels:" << std::endl;
	std::cout << GREEN;
	std::cout << "  DEBUG" << std::endl;
	std::cout << "  INFO" << std::endl;
	std::cout << "  WARNING" << std::endl;
	std::cout << "  ERROR" << std::endl;
	std::cout << RESET; 
	std::cout << "Type " << GREEN << "END" << RESET << " to exit" << std::endl;

	while (true)
	{
		std::cout << "> ";
		if (!std::getline(std::cin, level))
			break;
		if (level == "END")
			break;
		harl.complain(level);
	}
	return 0;
}

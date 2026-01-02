/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:09:10 by vimazuro          #+#    #+#             */
/*   Updated: 2026/01/02 15:11:57 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << MAGENTA << "Program takes three parameters: \n"
				  << RESET << "1. Name of an existing file \n"
				  << "2. The string to search for in the file \n"
				  << "3. The string that will replace the found one \n"
				  << MAGENTA
				  << "Example: ./Sed_is_for_losers \"test\" \"es\" \":P\""
				  << RESET << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty())
	{
		std::cerr << RED
				  << "Error: the string to search for must not be empty"
				  << RESET << std::endl;
		return 1;
	}

	Sed sed(filename, s1, s2);
	if (!sed.openInputFile())
		return 1;
	if (!sed.openOutputFile())
		return 1;
	sed.copyFile();
	return 0;
}

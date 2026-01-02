/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:36:32 by vimazuro          #+#    #+#             */
/*   Updated: 2026/01/02 15:14:39 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <string>

#define RESET	"\033[0m"
#define RED		"\033[31m"
#define MAGENTA	"\033[35m"

class Sed
{
private:
	std::string _filename;
	std::string _s1;
	std::string _s2;

	std::ifstream _infile;
	std::ofstream _outfile;

public:
	Sed(std::string &filename, std::string &s1, std::string &s2);
	~Sed();

	bool	openInputFile();
	bool	openOutputFile();
	void	copyFile();
};

#endif

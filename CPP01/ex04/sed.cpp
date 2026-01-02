/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:35:01 by vimazuro          #+#    #+#             */
/*   Updated: 2026/01/02 15:13:31 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

Sed::Sed(std::string &filename, std::string &s1, std::string &s2) : _filename(filename), _s1(s1), _s2(s2) {}

Sed::~Sed()
{
	if (_infile.is_open())
		_infile.close();
	if (_outfile.is_open())
		_outfile.close();
}

bool Sed::openInputFile()
{
	_infile.open(_filename.c_str());
	if (!_infile)
	{
		std::cerr << RED << "Error: cannot open file " << RESET
				  << _filename << std::endl;
		return false;
	}
	return true;
}

bool Sed::openOutputFile()
{
	std::string outfilename = _filename + ".replace";
	_outfile.open(outfilename.c_str());
	if (!_outfile)
	{
		std::cerr << RED << "Error: cannot create file " << RESET
				  << outfilename << std::endl;
		return false;
	}
	return true;
}

void Sed::copyFile()
{
	std::string line;
	while (std::getline(_infile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(_s1, pos)) != std::string::npos)
		{
			line.erase(pos, _s1.length());
			line.insert(pos, _s2);
			pos += _s2.length();
		}
		_outfile << line;
		if (!_infile.eof())
			_outfile << std::endl;
	}
}

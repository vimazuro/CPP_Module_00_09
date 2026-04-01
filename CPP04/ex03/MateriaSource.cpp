/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 16:27:08 by vimazuro          #+#    #+#             */
/*   Updated: 2026/04/01 15:41:42 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_storage[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other) : IMateriaSource(other)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (other._storage[i])
			_storage[i] = other._storage[i]->clone();
		else
			_storage[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_storage[i])
				delete _storage[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (other._storage[i])
				_storage[i] = other._storage[i]->clone();
			else
				_storage[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_storage[i])
			delete _storage[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (_storage[i] == NULL)
		{
			_storage[i] = m->clone();
			delete m;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_storage[i] && _storage[i]->getType() == type)
			return _storage[i]->clone();

	}
	return NULL;
}

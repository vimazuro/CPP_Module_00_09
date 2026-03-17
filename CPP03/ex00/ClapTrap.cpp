/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 14:42:46 by vimazuro          #+#    #+#             */
/*   Updated: 2026/03/17 17:34:54 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_hitPoints <= 0)
		return;
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout	<< "ClapTrap " << _name
				<< " attacks " << target
				<< ", causing " << _attackDamage
				<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
		return;
	if (amount >= (unsigned int)_hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;

	std::cout	<< "ClapTrap " << _name
				<< " takes " << amount
				<< " points of damage!" << std::endl;
				
	if (_hitPoints == 0)
	{
		std::cout	<< "ClapTrap " << _name << " is dead!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
		return;
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair" << std::endl;
		return;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout	<< "ClapTrap " << _name
				<< " repairs itself for " << amount
				<< " hit points!" << std::endl;
}

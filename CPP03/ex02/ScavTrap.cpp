/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 17:53:08 by vimazuro          #+#    #+#             */
/*   Updated: 2026/03/19 16:12:15 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << getName() << " constructor called" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (getHitPoints() <= 0)
		return;
	if (getEnergyPoints() <= 0)
	{
		std::cout << "ScavTrap " << getName() << " can't attack" << std::endl;
		return;
	}
	setEnergyPoints(getEnergyPoints() - 1);
	std::cout	<< "ScavTrap " << getName()
				<< " attacks " << target
				<< ", causing " << getAttackDamage()
				<< " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}

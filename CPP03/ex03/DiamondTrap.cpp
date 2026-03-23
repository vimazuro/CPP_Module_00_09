/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:28:37 by vimazuro          #+#    #+#             */
/*   Updated: 2026/03/23 17:48:43 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), FragTrap(), ScavTrap(), name("Default")
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(30);
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name)
{
    std::cout << "DiamondTrap " << getDiamondName() << " constructor called" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(30);
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other),  name(other.name)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
        name = other.name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << getDiamondName() << " destroyed" << std::endl;
}

std::string	DiamondTrap::getDiamondName() const
{
    return name;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << getDiamondName() << std::endl;
    std::cout << "ClapTrap name: " << getName() << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:04:19 by vimazuro          #+#    #+#             */
/*   Updated: 2025/12/29 14:38:28 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
    std::cout   << RED << _name << RESET
                << " is created with weapon " 
                << RED << _weapon.getType() << RESET << std::endl;
}

HumanA::~HumanA()
{
    std::cout   << RED << _name << RESET
                << " is destroyed" << std::endl;
}

void HumanA::attack()
{
    std::cout   << RED << _name << RESET 
                << " attacks with their " << RED
                << _weapon.getType() << RESET << std::endl;
}
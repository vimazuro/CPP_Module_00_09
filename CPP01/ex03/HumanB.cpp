/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:04:53 by vimazuro          #+#    #+#             */
/*   Updated: 2025/12/29 14:38:23 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
    std::cout   << BYELLOW << _name << RESET
                << " is created without weapon " << std::endl;
}

HumanB::~HumanB()
{
    std::cout   << BYELLOW << _name << RESET
                << " is destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
    std::cout   << BYELLOW << _name << RESET
                << " receives weapon " 
                << BYELLOW << _weapon->getType() << RESET
                << std::endl;
}

void HumanB::attack()
{
    if (_weapon)
        std::cout   << BYELLOW << _name << RESET 
                    << " attacks with their " << BYELLOW 
                    << _weapon->getType() << RESET << std::endl;
    else
        std::cout   << BYELLOW << _name << RESET 
                    << " has no weapon to attack "
                    << std::endl;
}

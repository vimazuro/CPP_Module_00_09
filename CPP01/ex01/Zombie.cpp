/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:10:42 by vimazuro          #+#    #+#             */
/*   Updated: 2025/12/23 17:13:46 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _index(0), _name("") {}

Zombie::~Zombie()
{
    std::cout   << "Zombie " << RED << _index + 1 << RESET
    << " is destroyed." << std::endl;
}

void Zombie::setZombie(int index, std::string name)
{
    _index = index;
    _name = name;
}

void Zombie::announce(void)
{
    std::cout   << _name << " " << GREEN << _index + 1 << RESET
                << " is created." << std::endl;
}
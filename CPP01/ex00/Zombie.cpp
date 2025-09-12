/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 12:40:24 by vimazuro          #+#    #+#             */
/*   Updated: 2025/09/12 12:51:28 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie()
{
	std::cout	<< "Zombie " << GREEN << _name << RESET
				<< " is destroyed." << std::endl;
}

void Zombie::announce(void)
{
	std::cout	<< GREEN << _name << RESET
                << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
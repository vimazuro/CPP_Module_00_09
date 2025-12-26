/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:11:04 by vimazuro          #+#    #+#             */
/*   Updated: 2025/12/26 12:26:05 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
    if (n <= 0)
        return NULL;
    
    Zombie* horde = new Zombie[n];
    for (int i = 0; i < n; i++)
        horde[i].setZombie(i, name);
    return horde;
}

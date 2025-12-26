/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:09:45 by vimazuro          #+#    #+#             */
/*   Updated: 2025/12/23 17:18:43 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main()
{
    int n = 10;
    Zombie* horde = zombieHorde(n, "Zombie");
    for (int i = 0; i < n; i++)
        horde[i].announce();
    delete[] horde;
    return 0;
}

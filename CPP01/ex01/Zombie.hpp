/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:10:23 by vimazuro          #+#    #+#             */
/*   Updated: 2025/12/23 17:02:47 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define RESET   "\033[0m"

#include <string>
#include <iostream>

class Zombie
{
private:
        int         _index;
        std::string _name;
public:
        Zombie();
        ~Zombie();

        void    setZombie(int index, std::string name);
        void    announce(void);
};

Zombie* zombieHorde(int n, std::string name);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:04:37 by vimazuro          #+#    #+#             */
/*   Updated: 2025/12/26 16:29:18 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
    private:
            std::string _name;
            Weapon*     _weapon;
    public:
            HumanB(std::string name);
            ~HumanB();
            
            void    setWeapon(Weapon& weapon);
            void    attack();
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:03:31 by vimazuro          #+#    #+#             */
/*   Updated: 2025/12/26 16:42:40 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define BYELLOW "\033[93m"

class Weapon
{
    private:
            std::string _type;
    public:
            Weapon(std::string type = "");
            ~Weapon();

            std::string&    getType();
            void            setType(std::string new_type);
};

#endif

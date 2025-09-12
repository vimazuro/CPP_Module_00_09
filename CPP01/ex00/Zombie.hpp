/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:51:04 by vimazuro          #+#    #+#             */
/*   Updated: 2025/09/12 12:48:34 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

#define GREEN	"\033[32m"
#define RESET	"\033[0m"

class Zombie
{
private:
	std::string _name;

public:
	Zombie(std::string name);
	~Zombie();

	void announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
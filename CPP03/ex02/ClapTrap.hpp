/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 14:42:52 by vimazuro          #+#    #+#             */
/*   Updated: 2026/03/19 17:19:04 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

protected:
	void		setName(std::string new_name);
	void		setHitPoints(int hp);
	void		setEnergyPoints(int energy);
	void		setAttackDamage(int damage);
	std::string	getName() const;
	int			getHitPoints() const;
	int			getEnergyPoints() const;
	int			getAttackDamage() const;
	
public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	~ClapTrap();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif

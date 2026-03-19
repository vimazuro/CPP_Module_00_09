/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 14:42:59 by vimazuro          #+#    #+#             */
/*   Updated: 2026/03/19 15:38:34 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Knight");

	a.attack("Enemy");
	a.takeDamage(8);
	a.beRepaired(3);

	for (int i = 0; i < 10; i++)
		a.attack("Enemy");

	a.takeDamage(5);
	a.beRepaired(2);
	a.guardGate();

	return 0;
}

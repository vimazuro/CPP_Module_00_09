/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 14:42:59 by vimazuro          #+#    #+#             */
/*   Updated: 2026/03/17 17:36:21 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Knight");

	a.attack("Enemy");
	a.takeDamage(8);
	a.beRepaired(3);

	for (int i = 0; i < 10; i++)
		a.attack("Enemy");

	a.takeDamage(5);
	a.beRepaired(2);

	return 0;
}

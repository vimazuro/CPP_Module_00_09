/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:50:29 by vimazuro          #+#    #+#             */
/*   Updated: 2025/09/12 12:42:53 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie*	heap_zombie = newZombie("I_am_heap");
	heap_zombie->announce();
	delete heap_zombie;

	randomChump("I_am_stack");

	return 0;
}
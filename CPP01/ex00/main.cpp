/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:50:29 by vimazuro          #+#    #+#             */
/*   Updated: 2025/12/29 14:52:48 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie*	heap_zombie = newZombie("I_am_heap");
	if (!heap_zombie)
	{
		std::cerr << "Error: memory allocation failed" << std::endl;
		return 1;
	}
	heap_zombie->announce();
	delete heap_zombie;
	randomChump("I_am_stack");
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:24:20 by vimazuro          #+#    #+#             */
/*   Updated: 2026/02/09 18:57:07 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point const a(0, 0);
	Point const b(4, 0);
	Point const c(0, 3);
	Point const point(1, 2);
	
	std::cout << "Vertices of a triangle:" << std::endl;
	std::cout << BLUE << "A(" << a.getX() << ", " << a.getY() << ")" << std::endl;
	std::cout << "B(" << b.getX() << ", " << b.getY() << ")" << std::endl;
	std::cout << "C(" << c.getX() << ", " << c.getY() << ")" << RESET << std::endl;
	std::cout << "The point to check:" << std::endl;
	std::cout << BLUE << "P(" << point.getX() << ", " << point.getY() << ")" << RESET << std::endl;

	if (bsp(a, b, c, point))
		std::cout << GREEN << "Point is inside the triangle" << RESET << std::endl;
	else
		std::cout << RED << "Point is not inside the triangle" << RESET << std::endl;
	return 0;
}

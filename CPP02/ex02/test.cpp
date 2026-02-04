/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 19:12:30 by vimazuro          #+#    #+#             */
/*   Updated: 2026/02/04 19:18:57 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a(5.5f);
	Fixed b(7.0f);
	Fixed d(0.0f);
	Fixed c = a / b;
	
    std::cout << " ------- comparison operators ------- " << std::endl;

	if (a > b)
    	std::cout << "a is bigger than b" << std::endl;
	if (a < b)
		std::cout << "a is smaller than b" << std::endl;
	if (a == b)
		std::cout << "a is equal to b" << std::endl;
	if (a != b)
		std::cout << "a is not equal to b" << std::endl;
	if (a >= b)
		std::cout << "a is bigger than or equal to b" << std::endl;
	if (a <= b)
		std::cout << "a is smaller than or equal to b" << std::endl;
	
    std::cout << " ------- arithmetic operators ------- " << std::endl;

	std::cout << a << " / " << b << " equal to " << c << std::endl;
	
    std::cout << " ------- increment/decrement ------- " << std::endl;

	std::cout << "--d = " << --d << std::endl;
	std::cout << "++d = " << ++d << " ++d = " << ++d << std::endl;
	std::cout << "d-- = " << d-- << "; d = " << d << std::endl;
	std::cout << "d++ = " << d++ << "; d = " << d << std::endl;

    std::cout << " ------- min/max ------- " << std::endl;

	return 0;
}

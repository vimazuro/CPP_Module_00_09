/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:53:25 by vimazuro          #+#    #+#             */
/*   Updated: 2026/02/04 19:11:01 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{

	Fixed		a;
	Fixed const	b( Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}

/*	Fixed a(5.5f);
	Fixed b(7.0f);
	Fixed d(0.0f);
	Fixed c = a / b;
	
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
	
	std::cout << a << " / " << b << " equal to " << c << std::endl;
	
	std::cout << "--d = " << --d << std::endl;
	std::cout << "++d = " << ++d << " ++d = " << ++d << std::endl;
	std::cout << "d-- = " << d-- << "; d = " << d << std::endl;
	std::cout << "d++ = " << d++ << "; d = " << d << std::endl;

	return 0;
}
*/
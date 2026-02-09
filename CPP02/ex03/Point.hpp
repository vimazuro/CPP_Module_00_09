/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:25:28 by vimazuro          #+#    #+#             */
/*   Updated: 2026/02/09 19:00:40 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

#define GREEN	"\033[32m"
#define RED		"\033[31m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"

class Point
{
private:
	Fixed const _x;
	Fixed const	_y;

public:
	Point();
	Point(float const x, float const y);
	Point(const Point &other);
	Point &operator=(const Point &other);
	~Point();

	Fixed	getX(void) const;
	Fixed	getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif

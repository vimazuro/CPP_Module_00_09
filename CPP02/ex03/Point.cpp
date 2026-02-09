/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:26:49 by vimazuro          #+#    #+#             */
/*   Updated: 2026/02/09 16:31:29 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(float const x, float const y) : _x(x), _y(y) {}

Point::Point(const Point &other) : _x(other._x), _y(other._y) {}

Point &Point::operator=(const Point &other)
{
	(void)other;
	return *this;
}

Point::~Point() {}

Fixed Point::getX(void) const
{
	return _x;
}

Fixed Point::getY(void) const
{
	return _y;
}

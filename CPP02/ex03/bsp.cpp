/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:27:09 by vimazuro          #+#    #+#             */
/*   Updated: 2026/02/09 18:45:39 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed cross1;
	Fixed cross2;
	Fixed cross3;

	cross1 = ((b.getX() - a.getX()) * (point.getY() - a.getY())) - ((b.getY() - a.getY()) * (point.getX() - a.getX()));
	cross2 = ((c.getX() - b.getX()) * (point.getY() - b.getY())) - ((c.getY() - b.getY()) * (point.getX() - b.getX()));
	cross3 = ((a.getX() - c.getX()) * (point.getY() - c.getY())) - ((a.getY() - c.getY()) * (point.getX() - c.getX()));

	if (cross1 > 0 && cross2 > 0 && cross3 > 0)
		return true;
	else if (cross1 < 0 && cross2 < 0 && cross3 < 0)
		return true;
	else
		return false;
}

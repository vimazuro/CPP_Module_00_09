/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:53:04 by vimazuro          #+#    #+#             */
/*   Updated: 2026/02/04 19:07:28 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixedPointValue = other._fixedPointValue;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = n << _fractionalBits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(f * (1 << _fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_fixedPointValue = other._fixedPointValue;
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
	return _fixedPointValue * 1.0f / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
	return _fixedPointValue >> _fractionalBits;
}

bool Fixed::operator>(const Fixed &other) const
{
	if (this->_fixedPointValue > other._fixedPointValue)
		return true;
	else
		return false;
}

bool Fixed::operator<(const Fixed &other) const
{
	if (this->_fixedPointValue < other._fixedPointValue)
		return true;
	else
		return false;
}

bool Fixed::operator>=(const Fixed &other) const
{
	if (this->_fixedPointValue >= other._fixedPointValue)
		return true;
	else
		return false;
}

bool Fixed::operator<=(const Fixed &other) const
{
	if (this->_fixedPointValue <= other._fixedPointValue)
		return true;
	else
		return false;
}

bool Fixed::operator==(const Fixed &other) const
{
	if (this->_fixedPointValue == other._fixedPointValue)
		return true;
	else
		return false;
}

bool Fixed::operator!=(const Fixed &other) const
{
	if (this->_fixedPointValue != other._fixedPointValue)
		return true;
	else
		return false;
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;

	result.setRawBits(this->_fixedPointValue + other._fixedPointValue);
	return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;

	result.setRawBits(this->_fixedPointValue - other._fixedPointValue);
	return result;
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;
	
	long tmp = (long)this->_fixedPointValue * (long)other._fixedPointValue;
	tmp = tmp >> _fractionalBits;
	result.setRawBits((int)tmp);
	return result;
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;
	
	long tmp = ((long)this->_fixedPointValue << _fractionalBits) / (long)other._fixedPointValue;
	result.setRawBits((int)tmp);
	return result;
}

Fixed &Fixed::operator++()
{
	_fixedPointValue += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed old(*this);
	_fixedPointValue += 1;
	return old;
}

Fixed &Fixed::operator--()
{
	_fixedPointValue -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed old(*this);
	_fixedPointValue -= 1;
	return old;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	else
		return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	else
		return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	else
		return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	else
		return b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return out;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 17:44:14 by mroux             #+#    #+#             */
/*   Updated: 2021/05/03 23:48:47 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(int const value)
{
	_value = value * 256;

}

Fixed::Fixed(float const value)
{
	_value = roundf(value * 256);
}

Fixed::Fixed(Fixed const& fixed)
{
	std::cout << "copy constructor called" <<  std::endl;
	_value = fixed._value;

}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

Fixed&		Fixed::operator=(Fixed const& fixed)
{
	std::cout << "operator= called" << std::endl;
	_value = fixed._value;
	return (*this);
}

void		Fixed::display(std::ostream& stream) const
{
	stream << toFloat();
}

int			Fixed::getRawBits()
{
	std::cout << "getRawBit function called" << std::endl;
	return  (_value);
}

int			Fixed::toInt() const
{
	return (_value / 256);
}

float		Fixed::toFloat() const
{
	return ((float)_value / (float) 256);
}

std::ostream& operator<<(std::ostream& stream, Fixed const& fixed)
{
	fixed.display(stream);
	return (stream);
}

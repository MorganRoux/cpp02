/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 17:44:14 by mroux             #+#    #+#             */
/*   Updated: 2021/05/02 18:14:53 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(int value): _value(value)
{
	std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& fixed)
{
	std::cout << "copy constructor called" <<  std::endl;
	_value = fixed._value;

}

Fixed&	Fixed::operator=(Fixed const& fixed)
{
	std::cout << "operator= called" << std::endl;
	_value = fixed._value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

int	Fixed::getRawBits()
{
	std::cout << "getRawBit function called" << std::endl;
	return  (_value);
}

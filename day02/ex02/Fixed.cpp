/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:26:13 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/30 15:05:40 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <bitset>

int const Fixed::fractionalBits = 8;

Fixed::Fixed(void)
{
    this->value = 0;
    std::cout << "Default constructer called.\n";
}

Fixed::Fixed(int const intValue)
{
    this->value = intValue << this->fractionalBits;
    std::cout << "Default constructer called.\n";
}

Fixed::Fixed(float const floatValue)
{
    this->value = roundf(floatValue * (1 << this->fractionalBits));
    std::cout << "Default constructer called.\n";
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructer called.\n";
    *this = src;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called.\n";
}

float Fixed::toFloat(void) const
{
    return((float)(this->value) / (float)(1 << this->fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->value >> fractionalBits);
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignment operator called.\n";
    if (this != &rhs)
        this->value = rhs.getRawBits();
    return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return (o);
}

bool    Fixed::operator==(Fixed const & rhs)
{
    if (this->value == rhs.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator!=(Fixed const & rhs)
{
    if (this->value == rhs.getRawBits())
        return (false);
    return (true);
}

bool    Fixed::operator<(Fixed const & rhs)
{
    if (this->value < rhs.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator<=(Fixed const & rhs)
{
    if (this->value <= rhs.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator>(Fixed const & rhs)
{
    if (this->value > rhs.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator>=(Fixed const & rhs)
{
    if (this->value >= rhs.getRawBits())
        return (true);
    return (false);
}

Fixed   Fixed::operator*(Fixed const & rhs)
{
    return (Fixed(this->toFloat()*rhs.toFloat()));
}

Fixed   Fixed::operator/(Fixed const & rhs)
{
    if (rhs.value != 0)
        return (Fixed(this->toFloat()/rhs.toFloat()));
    else
        std::cout << "Can't devide by zero!\n";
    return (*this);
}

Fixed   Fixed::operator+(Fixed const & rhs)
{
    return (Fixed(this->toFloat()+rhs.toFloat()));
}

Fixed   Fixed::operator-(Fixed const & rhs)
{
    return (Fixed(this->toFloat()-rhs.toFloat()));
}

int Fixed::getRawBits(void) const
{
    return (this->value);
}

void    Fixed::setRawBits(int const raw)
{
    this->value = raw;
}


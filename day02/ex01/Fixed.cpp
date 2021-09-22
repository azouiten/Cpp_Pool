/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:26:13 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/22 14:15:16 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
    this->value = round(floatValue * (1 << this->fractionalBits));
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
    return(this->value / (1 << this->fractionalBits));
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

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called.\n";
    return (this->value);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called.\n";
    this->value = raw;
}


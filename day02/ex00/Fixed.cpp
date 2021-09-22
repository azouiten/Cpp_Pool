/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:26:13 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/21 16:21:20 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::fractionalBits = 8;

Fixed::Fixed(void)
{
    this->value = 0;
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

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignment operator called.\n";
    if (this != &rhs)
        this->value = rhs.getRawBits();
    return (*this);
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


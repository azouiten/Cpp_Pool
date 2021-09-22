/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:26:15 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/22 13:52:13 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class   Fixed
{
private:
    int                 value;
    static int const    fractionalBits;

public:
    Fixed(void);
    Fixed(int const intValue);
    Fixed(float const floatValue);
    Fixed(Fixed const & src);
    ~Fixed(void);

    Fixed & operator=(Fixed const & rhs);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const; 
};
    std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
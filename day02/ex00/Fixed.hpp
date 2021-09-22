/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:26:15 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/21 15:50:28 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class   Fixed
{
private:
    int                 value;
    static int const    fractionalBits;

public:
    Fixed(void);
    Fixed(Fixed const & src);
    ~Fixed(void);

    Fixed & operator=(Fixed const & rhs);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

#endif
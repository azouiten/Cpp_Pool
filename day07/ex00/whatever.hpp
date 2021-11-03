/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 11:04:10 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/23 18:23:34 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
template <typename T>
void    swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

template <typename T>
T    min(T a, T b)
{
    T min;

    min = b;
    if (min > a)
        return (a);
    return (b);
}

template <typename T>
T    max(T a, T b)
{
    T max;

    max = b;
    if (max < a)
        return (a);
    return (b);
}

#endif
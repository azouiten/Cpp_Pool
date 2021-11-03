/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 07:18:07 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/25 11:28:22 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
private:
    T _array[];
    unsigned int _size;
public:
    Array(void)
    {
        _array = NULL;
        _size = 0;
    }
    Array(unsigned int n)
    {
        int index = 0;
        _array = new T[n];
        while (index++ < n)
        {
            _array[index - 1] = static_cast<T>(0);
        }
        _size = n;
    }
    Array(Array const & src)
    {
        if (this != &src)
            *this = src;
    }
    ~Array(void){}

    Array & operator=(Array const & rhs)
    {
        _ara
    }
};

#endif
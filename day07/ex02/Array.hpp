/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 07:18:07 by azouiten          #+#    #+#             */
/*   Updated: 2022/08/13 12:15:55 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
template <typename T>
class Array
{
private:
    T *_array;
    unsigned int _size;
public:
    Array(void) : _size(0), _array(NULL)
    {
    }
    Array(unsigned int n) : _size(n)
    {
        unsigned int index = 0;
        _array = new T[n];
        while (index++ < n)
        {
            _array[index - 1] = static_cast<T>(0);
        }
    }
    Array(Array const & src) : _size(0)
    {
        if (this != &src)
            *this = src;
    }
    ~Array(void){}

    unsigned int size(void) const
    {
        return _size;
    }

    T* getArray(void) const
    {
        return _array;
    }


    Array & operator=(Array const & rhs)
    {
        unsigned int index = 0;
        if (_size)
            delete _array;
        _size = rhs.size();
        _array = new T[_size];
        while(index < _size)
        {
            _array[index] = rhs.getArray()[index];
            index++;
        }
        return *this;
    }
    
    T & operator[](int index)
    {
        if (index < 0 || index >= static_cast<int>(_size))
            throw std::out_of_range("Error : out of range exception");
        return _array[index];
    }
};


#endif
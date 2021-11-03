/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:48:23 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/29 11:03:29 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class   Span
{
private:
    int                 _maxSize;
    int                 _size;
    std::vector<int>    _vContainer;
public:
    class   capacityExceededExeption : public std::exception
    {
        virtual const char* what() const throw()
        {
            return ("you have Exceeded the the capacity!\n");
        }
    };

    class   spanNotFoundExeption : public std::exception
    {
        virtual const char* what() const throw()
        {
            return ("there is no span!\n");
        }
    };
    Span(void);
    Span(int size);
    Span(Span const & src);
    ~Span(void);

    int getMaxSize(void) const;
    int getCurrSize(void) const;
    std::vector<int> getContainer(void) const;
    void addNumber(int nbr);
    template <typename T>
    void addNumber(T begin, T last)
    {
        int  distance = std::distance(begin, last);
        if (_maxSize < _size + distance)
            throw capacityExceededExeption();
        _vContainer.insert(_vContainer.end(), begin, last);
        _size += distance;
    };
    int shortestSpan(void);
    int longestSpan(void);
    Span & operator=(Span const & rhs);
};

#endif
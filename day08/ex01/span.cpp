/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:51:55 by azouiten          #+#    #+#             */
/*   Updated: 2022/08/13 18:27:30 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : _maxSize(0), _size(0)
{
}

Span::Span(unsigned int size) : _maxSize(size), _size(0)
{}

Span::Span(Span const & src)
{
    if (this != &src)
        *this = src;
}

Span::~Span(void){}

int Span::getMaxSize(void) const
{
    return (_maxSize);
}

int Span::getCurrSize(void) const
{
    return (_size);
}

std::vector<int> Span::getContainer(void) const
{
    return (_vContainer);
}

void    Span::addNumber(int nbr)
{
    if (_size == _maxSize)
        throw capacityExceededExeption();
    _size += 1;
    _vContainer.insert(_vContainer.begin(), nbr);
}

int     Span::longestSpan(void)
{
    if (_size <= 1)
        throw spanNotFoundExeption();
    int max = *max_element(_vContainer.begin(), _vContainer.end());
    int min = *min_element(_vContainer.begin(), _vContainer.end());
    return (max - min);
}

int     Span::shortestSpan(void)
{
    if (_size <= 1)
        throw spanNotFoundExeption();
    int min = *min_element(_vContainer.begin(), _vContainer.end());
    int span = this->longestSpan();
    std::vector<int>::iterator  itr = _vContainer.begin();
    std::vector<int>::iterator  endItr = _vContainer.end();

    while (itr < endItr && _size > 1)
    {
        if (*itr - min < span && *itr - min != 0)
            span = *itr - min;
        itr += 1;
    }
    return (span);
}

Span & Span::operator=(Span const & rhs)
{
    _maxSize = rhs.getMaxSize();
    _size = rhs.getCurrSize();
    _vContainer = rhs.getContainer();
    return (*this);
}
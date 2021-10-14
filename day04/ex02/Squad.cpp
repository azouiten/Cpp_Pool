/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:45:11 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/14 11:20:34 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
{
    _nbrUnits = 0;
    _units = NULL;
}

Squad::Squad(Squad const & src)
{
    if (this != &src)
    {
        _nbrUnits = 0;
        *this = src;
    }
}

Squad::~Squad(void)
{
    int     index = 0;

    while (index < _nbrUnits)
    {
        delete _units[index];
        index += 1;
    }
}

int Squad::getCount(void) const
{
    return (_nbrUnits);
}

ISpaceMarine * Squad::getUnit(int n) const
{
    if (n <= _nbrUnits)
        return (_units[n]);
    return (NULL);
}

int Squad::push(ISpaceMarine * unit)
{
    int i = 0;
    if (!unit)
        return (_nbrUnits);
        
    ISpaceMarine **newUnits = new ISpaceMarine*[_nbrUnits + 1];
    while (i < _nbrUnits)
    {
        newUnits[i] = _units[i];
        i += 1;
    }
    newUnits[i] = unit;
    delete _units;
    _units = newUnits;
    _nbrUnits += 1;
    return (_nbrUnits);
}

Squad & Squad::operator=(Squad const & rhs)
{
    int index = 0;

    std::cout << _nbrUnits << std::endl;
    while (index < _nbrUnits)
    {
        std::cout << "bombastic\n";
        delete _units[index];
    }
    if (_units)
        delete _units;
    _nbrUnits = rhs.getCount();
    _units = new ISpaceMarine*[_nbrUnits + 1];
    while (index < _nbrUnits)
    {
        _units[index] = rhs.getUnit(index)->clone();
        index += 1;
    }
    return (*this);
}
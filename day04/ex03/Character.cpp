/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:00:50 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/15 15:59:47 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
    _nbrmtr = 0;
    
}

Character::Character(std::string name)
{
    _name = name;
    _nbrmtr = 0;
}

Character::Character(Character const & src)
{
    if (this != &src)
        *this = src;
}

Character::~Character(void)
{
    int index = 0;
    while (index < 4)
    {
        delete _material[index];
        index += 1;
    }
}

AMateria * Character::getMateria(int idx) const
{
    return (_material[idx]);
}

int Character::getNbrMtr(void) const
{
    return (_nbrmtr);
}

std::string const & Character::getName(void) const
{
    return (_name);
}

void Character::equip(AMateria* m)
{
    int index = 0;
    
    if (_nbrmtr < 4)
    {
        _material[_nbrmtr] = m;
        _nbrmtr += 1;
    }
}

void Character::unequip(int idx)
{
    while (idx < 3)
    {
        _material[idx] = _material[idx + 1];
        idx += 1;
    }
    _nbrmtr -= 1;
}


void Character::use(int idx, ICharacter& target)
{
    _material[idx]->use(target);
}

Character& Character::operator=(Character const & rhs)
{
    int idx = 0;
    int size = rhs.getNbrMtr();
    
    while (idx < _nbrmtr)
    {
        delete _material[idx];
        idx += 1;
    }
    idx = 0;
    while(idx < size)
    {
        _material[idx] = rhs.getMateria(idx);
        idx += 1;
    }
    _name = rhs.getName();
    _nbrmtr = getNbrMtr();
}
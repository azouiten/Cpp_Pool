/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:04:47 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/09 14:40:37 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
    _weapon = NULL;
    _actionPoints = 40;
    // std::cout << "A Character has spawned.\n";
}

Character::Character(std::string const & name)
{
    _weapon = NULL;
    _name = name;
    _actionPoints = 40;
    // std::cout << "A Character has spawned.\n";
}

Character::Character(Character const & src)
{
    _weapon = NULL;
    *this = src;
    // std::cout << "A Character has spawned.\n";
}

Character::~Character(void)
{
    // std::cout << "A Character has died.\n";
}

void    Character::recoverAP(void)
{
    if (_actionPoints + 10 > 40)
        _actionPoints = 40;
    else
        _actionPoints += 10;
}

void    Character::equip(AWeapon* wpn)
{
    _weapon = wpn;
}

void    Character::attack(Enemy *enmy)
{
    if (enmy && _weapon && _actionPoints >= _weapon->getAPCost())
    {
        std::cout << _name << " attacks " << enmy->getType() << " with a " << _weapon->getName() << std::endl;
        _weapon->attack();
        enmy->takeDamage(_weapon->getDamage());
        _actionPoints -= _weapon->getAPCost();
        if (enmy->getHP() == 0)
            delete enmy;
    }
}

std::string Character::getName(void) const
{
    return (_name);
}

AWeapon * Character::getWeapon(void) const
{
    return (_weapon);
}

int Character::getAP(void) const
{
    return (_actionPoints);
}

Character & Character::operator=(Character const & rhs)
{
    if (this != &rhs)
    {
        _name = rhs.getName();
        _weapon = rhs.getWeapon();
        _actionPoints = rhs.getAP();
    }
    return (*this);
}

std::ostream & operator<<(std::ostream & o, Character const & rhs)
{
    if (rhs.getWeapon() != NULL)
        o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
    else
        o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed\n";
    return (o);
}
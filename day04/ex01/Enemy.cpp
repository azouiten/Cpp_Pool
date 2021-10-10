/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:21:02 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/09 13:11:56 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
    // std::cout << "An enemy has spawned.\n";
}

Enemy::Enemy(int hp, std::string const & type) : _hitPoints(hp), _type(type)
{
    // std::cout << "An enemy of tupe " << type << " has spawned.\n";
}

Enemy::Enemy(Enemy const & src)
{
    *this = src;
    // std::cout << "An enemy has spawned.\n";
}

Enemy::~Enemy(void)
{
    // std::cout << "An enemy has vanished.\n";
}

std::string Enemy::getType(void) const
{
    return (_type);
}

int Enemy::getHP(void) const
{
    return (_hitPoints);
}

Enemy & Enemy::operator=(Enemy const & rhs)
{
    _hitPoints = rhs.getHP();
    _type = rhs.getType();
    return (*this);
}

void    Enemy::takeDamage(int damage)
{
    if (damage < 0)
        return;
    else if (_hitPoints - damage < 0)
        _hitPoints = 0;
    else
        _hitPoints -= damage;
}
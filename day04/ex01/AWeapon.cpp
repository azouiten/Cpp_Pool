/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:28:15 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/09 13:08:40 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void){}

AWeapon::AWeapon(AWeapon const & src)
{
    *this = src;
    // std::cout << "a new weapon has been duplicated.\n";
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _damagePoints(damage), _actionPoints(apcost)
{
    // std::cout << "a new weapon has been forged.\n";
}

AWeapon::~AWeapon(void)
{
    // std::cout << "a weapon has been destroyed.\n";
}

std::string AWeapon::getName(void) const
{
    return (_name);
}

int AWeapon::getAPCost(void) const
{
    return (_actionPoints);
}

int AWeapon::getDamage(void) const
{
    return (_damagePoints);
}

AWeapon & AWeapon::operator=(AWeapon const & rhs)
{
    if (this != &rhs)
    {
    _name = rhs.getName();
    _damagePoints = rhs.getDamage();
    _actionPoints = rhs.getAPCost();
    }
    return (*this);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:28:15 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/07 10:51:48 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void){}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _damagePoints(damage), _actionPoints(apcost)
{
    std::cout << "a new weapon has been forged.\n";
}

AWeapon::~AWeapon(void)
{
    std::cout << "a weapon has been destroyed.\n";
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
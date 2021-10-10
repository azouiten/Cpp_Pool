/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:52:10 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/09 14:07:38 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
    // std::cout << "a Plasma Rifle has been created.\n";
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src)
{
    *this = src;
    // std::cout << "a Plasma Rifle has been duplicated.\n";
}

PlasmaRifle::~PlasmaRifle(void)
{
    // std::cout << "a Plasma Rifle has been destroyed.\n";
}

void    PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *\n";
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
    if (this != &rhs)
    {
        _name = rhs.getName();
        _damagePoints = rhs.getDamage();
        _actionPoints = rhs.getAPCost();
    }
    return (*this);
}
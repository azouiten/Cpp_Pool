/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:02:27 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/09 14:08:20 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
    // std::cout << "a Power Fist has been created.\n";
}

PowerFist::PowerFist(PowerFist const & src)
{
    *this = src;
    // std::cout << "a Power Fist has been duplicated.\n";
}

PowerFist::~PowerFist(void)
{
    // std::cout << "a Power Fist has been destroyed.\n";
}

void    PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM! *\n";
}

PowerFist & PowerFist::operator=(PowerFist const & rhs)
{
    if (this != &rhs)
    {
        _name = rhs.getName();
        _damagePoints = rhs.getDamage();
        _actionPoints = rhs.getAPCost();
    }
    return (*this);
}
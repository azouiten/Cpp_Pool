/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:52:10 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/07 11:00:28 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
    std::cout << "a Plasma Rifle has been created.\n";
}

PlasmaRifle::~PlasmaRifle(void)
{
    std::cout << "a Plasma Rifle has been destroyed.\n";
}

void    PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *\n";
}
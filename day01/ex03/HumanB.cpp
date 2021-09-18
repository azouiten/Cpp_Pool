/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:56:44 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/18 15:31:11 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
    std::cout << "a humanB has spawned!" << std::endl;
}

HumanB::HumanB(std::string name)
{
    _name = name;
    std::cout << "a humanB spawned!" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << _name << " died!" << std::endl;
}

void    HumanB::attack(void)
{
    std::cout << _name <<  " attacks with his " << _wpn->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& wpn)
{
    _wpn = &wpn;
}
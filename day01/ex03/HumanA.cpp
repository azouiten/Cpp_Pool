/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:51:22 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/18 12:59:47 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void)
{
    std::cout << "a human A spawns!" << std::endl;
}

HumanA::HumanA(Weapon wpn)
{
    _wpn = wpn;
    std::cout << "a human A spawns!" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << _name << " died!" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << _name <<  " attacks with his " << _wpn.getType() << std::endl;
}
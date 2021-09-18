/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:51:22 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/18 15:25:21 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wpn) : _name(name), _wpn(wpn)
{
    std::cout << "a humanA spawned!" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << _name << " died!" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << _name <<  " attacks with his " << _wpn.getType() << std::endl;
}
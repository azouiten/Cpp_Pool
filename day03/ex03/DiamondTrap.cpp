/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:06:05 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/05 12:59:52 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "a DiamondTrap has spawned.\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") , ScavTrap(4), FragTrap(3)
{
    pName = name;
    std::cout << "a DiamondTrap has spawned.\n";
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
    if (this != &rhs)
    {
        _name = rhs.getName();
        _hitPoints = rhs.getHitPoints();
        _energyPoints = rhs.getEnergyPoints();
        _attackDamage = rhs.getAttackDamage();
    }
    return (*this);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << " I am DiamondTrap " << pName << " and my ClapTrap name is " << _name << std::endl;
}
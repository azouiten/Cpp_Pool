/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:06:05 by azouiten          #+#    #+#             */
/*   Updated: 2021/11/01 17:45:59 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "a DiamondTrap has spawned.\n";
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(3), ScavTrap(4)
{
    _name = name + "_clap_name";
    pName = name;
    std::cout << "a DiamondTrap has spawned.\n";
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
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
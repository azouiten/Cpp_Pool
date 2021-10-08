/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:11:20 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/05 11:33:57 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "A ScavTrap has spawned!\n";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "A ScavTrap has spawned!\n";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _name = name;
}

ScavTrap::ScavTrap(int param)
{
    std::cout << "A ScavTrap has spawned!\n";
    if (param % 2 != 0)
    {
        param -= 1;
        _hitPoints = 100;
    }
    if (param >= 4)
    {
        param -= 4;
        _energyPoints = 50;
    }
    else if (param == 2)
        _attackDamage = 20;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "A ScavTrap has died.\n";
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
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

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " is now a gate keeper!\n";
}
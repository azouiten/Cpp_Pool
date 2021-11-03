/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:11:20 by azouiten          #+#    #+#             */
/*   Updated: 2021/11/01 17:26:22 by azouiten         ###   ########.fr       */
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

ScavTrap::ScavTrap(ScavTrap const &src)
{
    if (this != &src)
        *this = src;
}

void    ScavTrap::attack(std::string const & target)
{
    _energyPoints -= 1;
    std::cout << "ScavTrap " << _name << " has attacked " << target << " for " << _attackDamage << " Damage points!\n";
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

ScavTrap::~ScavTrap(void)
{
    std::cout << "A ScavTrap has died.\n";
}
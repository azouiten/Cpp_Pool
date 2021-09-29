/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:41:45 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/29 15:08:40 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "A ClapTrap has spawned.\n";
}

ClapTrap::ClapTrap(std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    _name = name;
    std::cout << "A ClapTrap has died.\n";
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "A ClapTrap has died.\n";
}

void    ClapTrap::attack(std::string const & target)
{
    _energyPoints -= 1;
    std::cout << "ClapTrap " << _name << " has attacked " << target << " for " << _attackDamage << " Damage points!\n";
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (amount >= _hitPoints)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " has taken " << amount << " of damage points (current health " << _hitPoints << ")\n";
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (amount + _hitPoints > 10)
        _hitPoints = 10;
    else
        _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " has healed for " << amount << " of hit points (current health " << _hitPoints << ")\n";
}
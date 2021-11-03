/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:41:45 by azouiten          #+#    #+#             */
/*   Updated: 2021/11/01 17:11:27 by azouiten         ###   ########.fr       */
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
    std::cout << "A ClapTrap has spawned.\n";
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    if (this != &src)
        *this = src;
}

void    ClapTrap::attack(std::string const & target)
{
    _energyPoints -= 1;
    std::cout << "ClapTrap " << _name << " has attacked " << target << " for " << _attackDamage << " Damage points!\n";
}

std::string ClapTrap::getName(void) const
{
    return (_name);
}

int     ClapTrap::getHitPoints(void) const
{
    return (_hitPoints);
}

int     ClapTrap::getEnergyPoints(void) const
{
    return (_energyPoints);
}

int     ClapTrap::getAttackDamage(void) const
{
    return (_attackDamage);
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_hitPoints = rhs.getHitPoints();
        this->_energyPoints = rhs.getEnergyPoints();
        this->_attackDamage = rhs.getAttackDamage();
    }
    return (*this);
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if ((int)amount >= _hitPoints)
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

ClapTrap::~ClapTrap(void)
{
    std::cout << "A ClapTrap has died.\n";
}
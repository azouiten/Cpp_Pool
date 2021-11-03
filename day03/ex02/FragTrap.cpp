/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:53:00 by azouiten          #+#    #+#             */
/*   Updated: 2021/11/01 17:36:09 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "A FragTrap has spawned!\n";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "A FragTrap has spawned!\n";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    _name = name;
}

FragTrap::FragTrap(FragTrap const &src)
{
    if (this != &src)
        *this = src;
}

void    FragTrap::attack(std::string const & target)
{
    _energyPoints -= 1;
    std::cout << "FragTrap " << _name << " has attacked " << target << " for " << _attackDamage << " Damage points!\n";
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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

void    FragTrap::highFivesGuys(void)
{
    std::cout << "This is a positive high fives request.\n";
}

FragTrap::~FragTrap(void)
{
    std::cout << "A FragTrap has died!\n";
}
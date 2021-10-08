/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:53:00 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/05 11:31:14 by azouiten         ###   ########.fr       */
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

FragTrap::FragTrap(int param)
{
    std::cout << "A FragTrap has spawned!\n";
    if (param % 2 != 0)
    {
        param -= 1;
        _hitPoints = 100;
    }
    if (param >= 4)
    {
        param -= 4;
        _energyPoints = 100;
    }
    else if (param == 2)
        _attackDamage = 30;
}

FragTrap::~FragTrap(void)
{
    std::cout << "A FragTrap has died!\n";
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
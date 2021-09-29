/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:11:20 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/29 15:35:22 by azouiten         ###   ########.fr       */
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

ScavTrap::~ScavTrap(void)
{
    std::cout << "A ScavTrap has died.\n";
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " is now a gate guard!\n";
}
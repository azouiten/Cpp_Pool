/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:11:37 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/09 11:51:29 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::SuperMutant(SuperMutant const & src)
{
    *this = src;
    std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaargh...\n";
}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs)
{
    _hitPoints = rhs.getHP();
    _type = rhs.getType();
    return (*this);
}

void    SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage -3);
}
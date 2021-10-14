/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:51:55 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/13 19:19:30 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
    std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine::TacticalMarine(TacticalMarine const & src)
{
    if (this != &src)
    {
        std::cout << "Tactical Marine ready for battle!\n";
        *this = src;
    }
}

TacticalMarine::~TacticalMarine(void)
{
    std::cout <<  "Aaargh...\n";
}

ISpaceMarine * TacticalMarine::clone(void) const
{
    return (new TacticalMarine());
}

void    TacticalMarine::battleCry(void) const
{
    std::cout << "For the holy PLOT!\n";
}

void    TacticalMarine::rangedAttack(void) const
{
    std::cout << "* attacks with a bolter *\n";
}

void    TacticalMarine::meleeAttack(void) const
{
    std::cout << "* attacks with a chainsword *\n";
}
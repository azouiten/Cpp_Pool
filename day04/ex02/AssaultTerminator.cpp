/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:14:25 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/13 21:18:49 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
    std::cout << "* teleports from space *\n";
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src)
{
    std::cout << "* teleports from space *\n";
    if (this != &src)
        *this = src;
}

AssaultTerminator::~AssaultTerminator(void)
{
    std::cout << "I’ll be back...\n";
}

ISpaceMarine * AssaultTerminator::clone(void) const
{
    return (new AssaultTerminator());
}

void    AssaultTerminator::battleCry(void) const
{
    std::cout << "This code is unclean. PURIFY IT!\n";
}

void    AssaultTerminator::rangedAttack(void) const
{
    std::cout << "* does nothing *\n";
}

void    AssaultTerminator::meleeAttack(void) const
{
    std::cout <<  "* attacks with chainfists *\n";
}
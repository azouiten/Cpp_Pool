/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:08:07 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/05 17:02:57 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void){}

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog.\n";
}

Peon::~Peon(void)
{
    std::cout << "Bleuark...\n";
}

void    Peon::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a pink pony!\n";
}

Peon & Peon::operator=(Peon const & rhs)
{
    if (this != &rhs)
    {
        _name = rhs.getName();
    }
    return (*this);
}

std::ostream & operator<<(std::ostream & o, Peon const & rhs)
{
    o << "I am " << rhs.getName() << " and I like otters!\n";
    return (o);
}

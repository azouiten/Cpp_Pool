/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:27:50 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/05 16:24:39 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void){}

Victim::Victim(std::string name)
{
    _name = name;
    std::cout << "Some random victim called " << _name << " just appeared!\n";
}

Victim::~Victim(void)
{
    std::cout << "Victim " << _name << " just died for no apparent reason!\n";
}

std::string Victim::getName(void) const
{
    return (_name);
}

void    Victim::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a cute little sheep!\n";
}

Victim & Victim::operator=(Victim const & rhs)
{
    if (this != &rhs)
    {
        _name = rhs.getName();
    }
    return (*this);
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs)
{
    o << "I am " << rhs.getName() << " and I like otters!\n";
    return (o);
}
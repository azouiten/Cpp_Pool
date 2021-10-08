/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:51:34 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/05 16:25:43 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void){}

Sorcerer::Sorcerer(std::string name, std::string title)
{
    _name = name;
    _title = title;
    std::cout << _name << ", " << _title << ", is born!\n";
}

Sorcerer::~Sorcerer(void)
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!\n";
}

std::string Sorcerer::getName(void) const
{
    return (_name);
}

std::string Sorcerer::getTitle(void) const
{
    return (_title);
}

void    Sorcerer::polymorph(Victim const & target) const
{
    target.getPolymorphed();
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs)
{
    if (this != &rhs)
    {
        _name = rhs.getName();
        _title = rhs.getTitle();
    }
    return (*this);
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs)
{
    o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies!\n";
    return (o);
}
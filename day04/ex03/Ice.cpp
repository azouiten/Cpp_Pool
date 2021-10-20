/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:30:06 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/15 15:21:26 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
}

Ice::Ice(Ice const & src)
{
    if (this != &src)
        *this = src;
}

Ice::Ice(std::string & type)
{
    _type = type;
}

Ice::~Ice(void)
{
    
}

AMateria* Ice::clone(void) const
{
    return (new Ice());
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice & Ice::operator=(Ice const & rhs)
{
    _type = rhs.getType();
    _xp = rhs.getXP();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:36:08 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/15 15:20:13 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
}

Cure::Cure(Cure const & src)
{
    if (this != &src)
        *this = src;
}

Cure::Cure(std::string & type)
{
    _type = type;
}

Cure::~Cure(void)
{
}

AMateria* Cure::clone(void) const
{
    return (new Cure());
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *\n";
}

Cure & Cure::operator=(Cure const & rhs)
{
    _type = rhs.getType();
    _xp = rhs.getXP();
}
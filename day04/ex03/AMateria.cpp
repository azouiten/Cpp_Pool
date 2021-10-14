/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:10:59 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/14 16:28:07 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    _xp =0;
}

AMateria::AMateria(std::string const & type)
{
    _xp =0;
    _type = type;
}

AMateria::~AMateria(void){}

std::string const & AMateria::getType(void) const
{
    return (_type);
}

unsigned int AMateria::getXP(void) const
{
    return (_xp);
}

void AMateria::use(ICharacter& target)
{
    _xp += 10;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:28:20 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/15 15:55:12 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    if (this != &src)
        *this = src;
}

MateriaSource::~MateriaSource(void)
{
    
}

void    MateriaSource::learnMateria(AMateria*) {}

AMateria* MateriaSource::createMateria(std::string const & type) {}
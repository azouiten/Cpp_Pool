/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:53:23 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/09 12:04:28 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(RadScorpion const & src)
{
    *this = src;
    std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion(void)
{
    std::cout << "* SPROTCH *\n";
}

RadScorpion & RadScorpion::operator=(RadScorpion const & rhs)
{
    if (this != &rhs)
    {
        _type = rhs.getType();
        _hitPoints = rhs.getHP();
    }
    return (*this);
}
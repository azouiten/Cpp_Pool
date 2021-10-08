/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tourist.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:17:50 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/06 13:22:07 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Tourist.hpp"

Tourist::Tourist(void){}

Tourist::Tourist(std::string name) : Victim(name)
{
    std::cout << "Wow i really like these landscapes.\n";
}

Tourist::~Tourist(void)
{
    std::cout << "Oh no!\n";
}

void    Tourist::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a frog!\n";
}

Tourist & Tourist::operator=(Tourist const & rhs)
{
    if (this != &rhs)
    {
        _name = rhs.getName();
    }
    return (*this);
}

std::ostream & operator<<(std::ostream & o, Tourist const & rhs)
{
    o << "I am " << rhs.getName() << " and I like yoga!\n";
    return (o);
}
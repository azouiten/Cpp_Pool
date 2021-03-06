/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:36:46 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/18 14:16:01 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    std::cout << "New weapon!"<< std::endl;
}

Weapon::Weapon(std::string type)
{
    this->type = type;
    std::cout << "New weapon!"<< std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << "Weapon destroyed!"<< std::endl;
}

 const std::string& Weapon::getType(void)
{
    return (this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}
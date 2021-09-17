/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:56:06 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/17 16:09:53 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << this->name << "wakes up." << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << this->name << "wakes up." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << "is dead." << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name << "BraiiiiiiinnnzzzZ..." << std::endl;
}
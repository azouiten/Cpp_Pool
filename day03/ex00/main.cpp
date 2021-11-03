/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:02:01 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/30 15:22:02 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    CT("blob");

    std::cout << "attack damage : " << CT.getAttackDamage() << std::endl;
    std::cout << "energy points : " << CT.getEnergyPoints() << std::endl;
    std::cout << "hit points    : " << CT.getHitPoints() << std::endl;
    std::cout << "name          : " << CT.getName() << std::endl;
    CT.attack("Fish");
    CT.takeDamage(5);
    CT.beRepaired(6);
    return (0);
}
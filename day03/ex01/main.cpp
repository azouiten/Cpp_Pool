/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:41:18 by azouiten          #+#    #+#             */
/*   Updated: 2021/11/01 17:23:22 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{
    ScavTrap st("zi_fish");
    
    std::cout << "attack damage : " << st.getAttackDamage() << std::endl;
    std::cout << "energy points : " << st.getEnergyPoints() << std::endl;
    std::cout << "hit points    : " << st.getHitPoints() << std::endl;
    std::cout << "name          : " << st.getName() << std::endl;
    st.attack("Fish");
    st.takeDamage(5);
    st.beRepaired(6);

    st.guardGate();
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:15:02 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/17 18:17:20 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zombie_horde = new Zombie[N];
    Zombie* current = zombie_horde;
    std::string    names[10] = {"Creeper", "Biter", "Roamer", "Lurker", "Walker", "Infected", "Rotter", "Deadhead", "Growler", "Stinker"};

    while (N)
    {
        current->setName(names[rand() % 10]);
        N -= 1;
        current += 1;
    }
    return (zombie_horde);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 09:51:54 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/09 14:37:26 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// int main(void)
// {
//     Character* me = new Character("me");
//     std::cout << *me;
//     Enemy* b = new RadScorpion();
//     AWeapon* pr = new PlasmaRifle();
//     AWeapon* pf = new PowerFist();
//     me->equip(pr);
//     std::cout << *me;
//     me->equip(pf);
//     me->attack(b);
//     std::cout << *me;
//     me->equip(pr);
//     std::cout << *me;
//     me->attack(b);
//     std::cout << *me;
//     me->attack(b);
//     std::cout << *me;
//     return 0;
// }

int main()
{
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    return 0;
}
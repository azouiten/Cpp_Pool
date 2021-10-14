/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:35:22 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/14 11:23:26 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    Squad* vlc = new Squad;
    
    vlc->push(bob);
    vlc->push(jim);
    Squad copy_vlc = Squad(*vlc);
    delete vlc; 
    for (int i = 0; i < copy_vlc.getCount(); ++i)
    {
        ISpaceMarine* cur = copy_vlc.getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    return 0;
}
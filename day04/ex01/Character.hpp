/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:04:45 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/09 12:53:46 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

class   Character
{
private:
    std::string _name;
    int         _actionPoints;
    AWeapon     *_weapon;
public:
    Character(void);
    Character(Character const & src);
    Character(std::string const & name);
    ~Character(void);

    void recoverAP(void);
    void equip(AWeapon*wpn);
    void attack(Enemy*enmy);
    AWeapon * getWeapon(void) const;
    std::string getName(void) const;
    int getAP(void) const;
    Character & operator=(Character const & rhs);
};

std::ostream & operator<<(std::ostream & o, Character const & rhs);

#endif
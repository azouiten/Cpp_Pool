/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:56:43 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/18 15:31:16 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.hpp"
#include <iostream>

class   HumanB
{
private:
    std::string _name;
    Weapon*      _wpn;

public:
    HumanB(void);
    HumanB(std::string name);
    ~HumanB(void);
    void    setWeapon(Weapon& wpn);
    void    attack(void);
};

#endif
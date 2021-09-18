/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:51:36 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/18 12:58:39 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H
#include "Weapon.hpp"
#include <iostream>

class   HumanA
{
private:
    std::string _name;
    Weapon      _wpn;

public:
    HumanA(void);
    HumanA(Weapon wpn);
    ~HumanA(void);
    void    attack(void);
};

#endif
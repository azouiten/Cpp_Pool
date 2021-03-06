/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:51:36 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/18 15:25:31 by azouiten         ###   ########.fr       */
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
    Weapon&      _wpn;

public:
    HumanA(std::string name, Weapon& wpn);
    ~HumanA(void);
    void    attack(void);
};

#endif
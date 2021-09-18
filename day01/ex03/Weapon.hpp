/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:38:46 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/18 15:20:18 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class   Weapon
{
private:
    std::string type;
public:
    Weapon();
    Weapon(std::string name);
    ~Weapon();
    const std::string& getType(void);
    void    setType(std::string type);
};

#endif
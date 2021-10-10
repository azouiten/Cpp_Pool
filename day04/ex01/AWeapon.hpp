/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:28:17 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/09 13:00:01 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>

class AWeapon
{
protected:
    std::string _name;
    int         _damagePoints;
    int         _actionPoints;

public:
    AWeapon(void);
    AWeapon(AWeapon const & src);
    AWeapon(std::string const & name, int apcost, int damage);
    ~AWeapon(void);
    std::string getName(void) const;
    int getAPCost(void) const;
    int getDamage(void) const;
    virtual void attack()   const = 0;
    AWeapon & operator=(AWeapon const & rhs);
};

#endif
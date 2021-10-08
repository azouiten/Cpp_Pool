/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:52:14 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/07 11:01:27 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class   PlasmaRifle : public AWeapon
{
public:
    PlasmaRifle(void);
    ~PlasmaRifle(void);
    virtual void attack(void) const;
};

#endif
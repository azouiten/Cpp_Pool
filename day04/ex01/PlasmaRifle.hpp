/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:52:14 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/09 10:17:23 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class   PlasmaRifle : public AWeapon
{
public:
    PlasmaRifle(void);
    PlasmaRifle(PlasmaRifle const & src);
    ~PlasmaRifle(void);
    virtual void attack(void) const;
    PlasmaRifle & operator=(PlasmaRifle const & rhs);
};

#endif
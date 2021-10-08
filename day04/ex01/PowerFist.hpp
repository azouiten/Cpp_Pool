/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:01:51 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/07 11:22:15 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class   PowerFist : public AWeapon
{
public:
    PowerFist(void);
    ~PowerFist(void);
    virtual void attack(void) const;
};

#endif
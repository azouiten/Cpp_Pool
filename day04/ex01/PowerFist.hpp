/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:01:51 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/09 13:04:13 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class   PowerFist : public AWeapon
{
public:
    PowerFist(void);
    PowerFist(PowerFist const & src);
    ~PowerFist(void);
    virtual void attack(void) const;
    PowerFist & operator=(PowerFist const & rhs);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:51:56 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/13 21:22:36 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP
#include "ISpaceMarine.hpp"
#include <iostream>

class   TacticalMarine : public ISpaceMarine
{
private:
public:
    TacticalMarine(void);
    TacticalMarine(TacticalMarine const & src);
    virtual ~TacticalMarine(void);

    virtual ISpaceMarine* clone(void) const;
    virtual void    battleCry(void) const;
    virtual void    rangedAttack(void) const;
    virtual void    meleeAttack(void) const;
};

#endif
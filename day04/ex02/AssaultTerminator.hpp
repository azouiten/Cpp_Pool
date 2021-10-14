/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:14:23 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/13 21:22:46 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>


class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator(void);
        AssaultTerminator(AssaultTerminator const & src);
        virtual ~AssaultTerminator(void);

        virtual ISpaceMarine* clone(void) const;
        virtual void battleCry(void) const;
        virtual void rangedAttack(void) const;
        virtual void meleeAttack(void) const;   
};


#endif
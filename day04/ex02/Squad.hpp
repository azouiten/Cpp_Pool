/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:51:13 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/14 11:00:18 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP
#include "ISquad.hpp"
#include <iostream>

class   Squad : public ISquad
{
private:
    int _nbrUnits;
    ISpaceMarine ** _units;

public:
    Squad(void);
    Squad(Squad const & src);
    virtual ~Squad(void);

    virtual int getCount(void) const;
    virtual ISpaceMarine* getUnit(int) const;
    virtual int push(ISpaceMarine*);

    Squad & operator=(Squad const & rhs);
};

#endif
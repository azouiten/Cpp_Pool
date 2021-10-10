/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:21:01 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/09 14:29:39 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class   Enemy
{
protected:
    int         _hitPoints;
    std::string _type;
public:
    Enemy(void);
    Enemy(int hp, std::string const & type);
    Enemy(Enemy const & rhs);
    virtual ~Enemy(void);

    std::string getType(void) const;
    int getHP(void) const;
    
    Enemy & operator=(Enemy const & rhs);
    virtual void takeDamage(int damage);
};

#endif
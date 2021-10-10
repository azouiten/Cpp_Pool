/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:11:36 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/09 11:31:48 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
    SuperMutant(void);
    SuperMutant(SuperMutant const & src);
    ~SuperMutant(void);

    SuperMutant & operator=(SuperMutant const & rhs);
    virtual void    takeDamage(int damage);
};
#endif
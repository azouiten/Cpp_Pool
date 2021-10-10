/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:51:55 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/09 12:27:37 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
    RadScorpion(void);
    RadScorpion(RadScorpion const & src);
    ~RadScorpion(void);

    RadScorpion & operator=(RadScorpion const & rhs);
};

#endif
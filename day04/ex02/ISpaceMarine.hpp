/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:47:15 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/13 19:01:19 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP


class ISpaceMarine
{
public:
virtual ~ISpaceMarine(void) {}
virtual ISpaceMarine* clone(void) const = 0;
virtual void battleCry(void) const = 0;
virtual void rangedAttack(void) const = 0;
virtual void meleeAttack(void) const = 0;
};

#endif
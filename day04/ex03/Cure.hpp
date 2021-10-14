/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:35:19 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/14 17:54:08 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class   Cure : public AMateria
{
public:
    Cure(void);
    Cure(Cure const & src);
    Cure(std::string & type);
    virtual ~Cure(void);

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
    Cure & operator=(Cure const & rhs);
};

#endif
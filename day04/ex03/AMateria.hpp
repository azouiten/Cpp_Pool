/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:10:57 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/14 16:23:22 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
typedef ICharacter;

class AMateria
{
    protected:
    std::string _type;
    unsigned int _xp;
    
    public:
    AMateria(void);
    AMateria(std::string const & type);
    virtual ~AMateria();
    std::string const & getType() const; //Returns the materia type
    unsigned int getXP() const; //Returns the Materia's XP
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif
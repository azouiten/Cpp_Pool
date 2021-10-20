/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:59:52 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/15 15:52:06 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class   Character
{
private:
    AMateria    *_material[4];
    std::string _name;
    int         _nbrmtr;
    
public:
    Character(void);
    Character(std::string name);
    Character(Character const & src);
    virtual ~Character();
    virtual std::string const & getName(void) const;
    virtual AMateria * getMateria(int index) const;
    virtual int getNbrMtr(void) const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
    Character & operator=(Character const & rhs);
};

#endif
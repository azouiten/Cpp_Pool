/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:30:08 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/14 17:50:39 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class   Ice : public AMateria
{
public:
    Ice(void);
    Ice(Ice const & src);
    Ice(std::string & type);
    virtual ~Ice(void);

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
    Ice & operator=(Ice const & rhs);
};

#endif
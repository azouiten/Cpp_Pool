/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:08:08 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/05 17:09:15 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP
#include "Victim.hpp"

class   Peon : public   Victim
{
private:
    Peon(void);

public:
    Peon(std::string name);
    ~Peon(void);

    Peon & operator=(Peon const & rhs);
    virtual void getPolymorphed(void) const;
};

std::ostream & operator<<(std::ostream & o, Peon const & rhs);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:27:52 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/05 17:09:05 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class   Victim
{
protected:
    std::string _name;
    Victim(void);

public:
    Victim(std::string name);
    ~Victim(void);

    Victim & operator=(Victim const & rhs);
    std::string getName(void) const;
    virtual void getPolymorphed(void) const;
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif
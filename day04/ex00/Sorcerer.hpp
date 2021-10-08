/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:51:36 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/05 17:08:51 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class   Sorcerer
{
private:
    std::string _name;
    std::string _title;
    Sorcerer(void);

public:
    Sorcerer(std::string name, std::string title);
    ~Sorcerer(void);

    std::string getName(void) const;
    std::string getTitle(void) const;
    Sorcerer & operator=(Sorcerer const & rhs);
    void polymorph(Victim const &) const;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif
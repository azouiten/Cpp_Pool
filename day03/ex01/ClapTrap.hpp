/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:41:47 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/29 15:23:23 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class   ClapTrap
{
protected:
    std::string _name;
    int         _hitPoints;
    int         _energyPoints;
    int         _attackDamage;
    
public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ~ClapTrap(void);
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
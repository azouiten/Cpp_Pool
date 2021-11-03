/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:11:22 by azouiten          #+#    #+#             */
/*   Updated: 2021/11/01 17:22:11 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class   ScavTrap : public ClapTrap
{
    public:
    ScavTrap(void);
    ScavTrap(ScavTrap const &src);
    ScavTrap(std::string name);
    void attack(std::string const & target);
    ScavTrap & operator=(ScavTrap const & rhs);
    void guardGate(void);
    ~ScavTrap(void);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:11:22 by azouiten          #+#    #+#             */
/*   Updated: 2021/11/01 17:43:26 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class   ScavTrap : virtual public ClapTrap
{
    public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(int param);
    ScavTrap(ScavTrap const &);
    void attack(std::string const & target);

    ScavTrap & operator=(ScavTrap const & rhs);
    void guardGate(void);
    ~ScavTrap(void);
};

#endif
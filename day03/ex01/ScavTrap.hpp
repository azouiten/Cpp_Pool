/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:11:22 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/29 15:33:20 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class   ScavTrap : public ClapTrap
{
    ScavTrap(void);
    ScavTrap(std::string name);
    ~ScavTrap(void);
    void guardGate(void);
};

#endif
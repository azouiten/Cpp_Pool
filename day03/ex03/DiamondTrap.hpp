/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:06:03 by azouiten          #+#    #+#             */
/*   Updated: 2021/11/01 17:44:50 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class   DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string pName;

public:
    DiamondTrap(void);
    DiamondTrap(DiamondTrap const &);
    DiamondTrap(std::string name);
    void attack(std::string const & target);
    DiamondTrap & operator=(DiamondTrap const & rhs);
    void    whoAmI(void);
};

#endif
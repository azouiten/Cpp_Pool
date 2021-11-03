/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:52:59 by azouiten          #+#    #+#             */
/*   Updated: 2021/11/01 17:40:51 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class   FragTrap : virtual public   ClapTrap
{
public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(int param);
    FragTrap(FragTrap const &src);
    void attack(std::string const & target);

    FragTrap & operator=(FragTrap const & rhs);
    void highFivesGuys(void);
    ~FragTrap(void);
};

#endif

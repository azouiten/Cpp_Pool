/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:52:59 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/05 11:24:18 by azouiten         ###   ########.fr       */
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
    ~FragTrap(void);

    FragTrap & operator=(FragTrap const & rhs);
    void highFivesGuys(void);
};

#endif

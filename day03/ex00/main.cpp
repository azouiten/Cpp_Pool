/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:02:01 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/29 15:07:04 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    CT("blob");

    CT.attack("Fish");
    CT.takeDamage(5);
    CT.beRepaired(6);
    return (0);
}
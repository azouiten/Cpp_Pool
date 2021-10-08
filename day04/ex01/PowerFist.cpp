/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:02:27 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/07 11:22:11 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
    std::cout << "a Power Fist has been created.\n";
}

PowerFist::~PowerFist(void)
{
    std::cout << "a Power Fist has been destroyed.\n";
}
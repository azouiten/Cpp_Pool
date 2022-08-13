/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:56:51 by azouiten          #+#    #+#             */
/*   Updated: 2022/08/11 17:36:54 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void){}

Data::Data(Data const & src)
{
    if (this != &src)
        *this = src;
}

Data::~Data(void){}

Data& Data::operator=(Data const & rhs)
{
    (void)rhs;
    return (*this);
}
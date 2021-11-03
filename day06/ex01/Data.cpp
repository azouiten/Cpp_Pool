/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:56:51 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/22 12:13:37 by azouiten         ###   ########.fr       */
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
    return (*this);
}
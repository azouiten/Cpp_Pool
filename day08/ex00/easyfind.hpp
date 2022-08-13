/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:07:01 by azouiten          #+#    #+#             */
/*   Updated: 2022/08/13 13:50:59 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
int easyfind(T container, int elemnt)
{
    typename T::iterator iter = container.begin();
    typename T::iterator iterEnd = container.end();

    if (std::find(iter, iterEnd, elemnt) == iterEnd)
        throw std::invalid_argument("Error : no such element");
    return 1;
}

#endif
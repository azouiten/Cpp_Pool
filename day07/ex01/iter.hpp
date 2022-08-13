/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:26:51 by azouiten          #+#    #+#             */
/*   Updated: 2022/08/11 18:25:45 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T, typename F>
void    iter(T table[], size_t size, F f)
{
    size_t index = 0;
    while (index < size)
    {
        f(table[index]);
        index += 1;
    }
}
#endif
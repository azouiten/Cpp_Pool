/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:07:01 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/27 14:13:33 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
int easyfind(T container, int elemnt)
{
    std::vector<int>::iterator iter = container.begin();
    std::vector<int>::iterator iterEnd = container.end();

    while (iter != iterEnd)
    {
        if (*iter == elemnt)
            return (1);
        iter += 1;
    }
    return (-1);
}

#endif
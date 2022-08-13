/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 07:18:30 by azouiten          #+#    #+#             */
/*   Updated: 2022/08/13 12:15:44 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
    Array<int>   a(10);
    Array<int>   b(a);
    a[1] = 10;
    std::cout << a[1] << std::endl;
    std::cout << b[1] << std::endl;
    b = a;
    std::cout << a[2] << std::endl;
    std::cout << b[2] << std::endl;
    try 
    {
        a[100] = 10;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:26:52 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/23 18:40:25 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void multiply(int & val)
{
    val *= 2;
}

void increment(int & val)
{
    val += 1;
}

void decrement(int & val)
{
    val -= 1;
}

int main(void)
{
    int index = 0;
    int Tab[10] = {1,2,3,4,5,6,7,8,9,0};

    while (index < 10)
    {
        std::cout << Tab[index] << "|";
        index ++;
    }
    std::cout << std::endl;
    ::iter(Tab, 10, &multiply);
    index = 0;
    while (index < 10)
    {
        std::cout << Tab[index] << "|";
        index ++;
    }
    std::cout << std::endl;
    ::iter(Tab, 10, &increment);
    index = 0;
    while (index < 10)
    {
        std::cout << Tab[index] << "|";
        index ++;
    }
    std::cout << std::endl;
    ::iter(Tab, 10, &decrement);
    index = 0;
    while (index < 10)
    {
        std::cout << Tab[index] << "|";
        index ++;
    }
    std::cout << std::endl;
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:12:38 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/30 15:05:07 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed   a(14.6f);
    Fixed   b(2.f);
    Fixed   c;
    Fixed   d;

    // c = a - b;
    // std::cout << c << std::endl;
    d = a / b;
    std::cout << d << std::endl;
    return (0);
}
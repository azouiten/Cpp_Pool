/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:51:07 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/29 11:04:00 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    Span sp = Span(5);
    // sp.addNumber(5);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
    Span sp_1000 = Span(1000);
    int index = 1;
    while (index < 1000)
    {
        sp_1000.addNumber(index);
        index += 1;
    }
    std::cout << sp_1000.shortestSpan() << std::endl;
    std::cout << sp_1000.longestSpan() << std::endl;
    std::vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(17);
    v.push_back(9);
    v.push_back(11);
    std::cout << "+++++++++++++++++++++++++++++++++++++++++++\n";
    sp.addNumber(v.begin(), v.end());
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    
}
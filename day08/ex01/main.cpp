/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:51:07 by azouiten          #+#    #+#             */
/*   Updated: 2022/08/13 18:42:16 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <ctime>
int main()
{  
    std::srand(time(0));
    Span sp_100000 = Span(100000);
    int index = 0;
    while (index < 100000)
    {
        sp_100000.addNumber(std::rand() % 1000000);
        index += 1;
    }
    std::cout << sp_100000.shortestSpan() << std::endl;
    std::cout << sp_100000.longestSpan() << std::endl;

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++\n";
    
    Span sp = Span(5);
    std::vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(17);
    v.push_back(9);
    v.push_back(11);
    sp.addNumber(v.begin(), v.end());
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    
}
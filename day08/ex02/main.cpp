/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:40:58 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/29 16:39:50 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
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

int main()
{
    MutantStack<int, std::vector<int> > mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "-->" << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(150);
    mstack.push(35);
    mstack.push(0);
    mstack.push(89);
    mstack.push(8);
    mstack.push(5);
    mstack.push(95);
    mstack.push(3);
    mstack.push(9);
    mstack.push(20);
    mstack.push(3);
    mstack.push(2);
    mstack.push(1);
    mstack.push(3);
    mstack.push(4);
    mstack.push(8);
    mstack.push(0);
    MutantStack<int, std::vector<int> >::iterator it = mstack.begin();
    MutantStack<int, std::vector<int> >::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << "-->" << *it << std::endl;
    ++it;
    }
    std::cout << "++++++++++++++++++++++++++++++++++\n";
    MutantStack<int, std::vector<int> > s(mstack);
    it = s.begin();
    ite = s.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << "-->" << *it << std::endl;
    ++it;
    }
    std::cout << "----------------------------------\n";
    it = mstack.begin();
    ite = mstack.end();
    while (it != ite)
    {
    std::cout << "-->" << *it << std::endl;
    ++it;
    }
    std::cout << easyfind(mstack, 10000) << std::endl;
    return 0;
}
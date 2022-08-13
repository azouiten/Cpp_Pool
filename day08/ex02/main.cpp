/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:40:58 by azouiten          #+#    #+#             */
/*   Updated: 2022/08/13 18:55:36 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <vector>

template <typename T>
int easyfind(T container, int elemnt)
{
    std::vector<int>::const_reverse_iterator cr_iter = container.crbegin();
    std::vector<int>::const_reverse_iterator cr_iterEnd = container.crend();

    while (cr_iter != cr_iterEnd)
    {
        if (*cr_iter == elemnt)
            return (1);
        cr_iter += 1;
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
    while (it != ite)
    {
        std::cout << " | " << *it;
        ++it;
    }
    std::cout << std::endl << "--------------------------------------------------------------------------------------\n";


    MutantStack<int, std::vector<int> > s(mstack);
    it = s.begin();
    ite = s.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << " | " << *it;
        ++it;
    }
    std::cout << std::endl << "--------------------------------------------------------------------------------------\n";
    MutantStack<int, std::vector<int> >::reverse_iterator r_it = mstack.rbegin();
    MutantStack<int, std::vector<int> >::reverse_iterator r_ite = mstack.rend();
    while (r_it != r_ite)
    {
        std::cout << " | " << *r_it;
        ++r_it;
    }
    std::cout << std::endl << "searching for 150 : " << easyfind(mstack, 150) << std::endl;
    std::cout << "searching for 103 : " << easyfind(mstack, 103) << std::endl;
    return 0;
}
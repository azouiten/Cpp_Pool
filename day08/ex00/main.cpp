/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:14:45 by azouiten          #+#    #+#             */
/*   Updated: 2022/08/13 13:51:17 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::vector<int> v(10, 2);
    std::list<int> v(10, 2);
    try 
    {
        std::cout << easyfind(v, 2) << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }
    return (0);
}
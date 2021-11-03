/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:06:19 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/22 12:12:27 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

int main(void)
{
    Data *data = new Data();
    Data *copyData;
    
    copyData = deserialize(serialize(data));
    if (data == copyData)
        std::cout << "The pointers are the same.\n";
    else
        std::cout << "the pointers are not the same.\n";
    std::cout << data << std::endl << copyData << std::endl;
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:40:50 by azouiten          #+#    #+#             */
/*   Updated: 2021/07/28 16:55:18 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.class.hpp"

int main(void)
{
    int quit = 0;
    int response;
    phoneBook phoneBookInstance;

    while (!quit)
    {
        std::cout << "1 - ADD" << std::endl;
        std::cout << "2 - SEARCH" << std::endl;
        std::cout << "3 - EXIT" << std::endl;
        std::cout << "entre action : ";
        std::cin >> response;
        if (response == 1)
            phoneBookInstance.addContact();
        else if (response == 2)
        {

        }
        else
            quit = 1;
    }
    return (0);
}
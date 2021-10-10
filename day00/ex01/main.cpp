/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:40:50 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/09 09:22:51 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.class.hpp"

int main(void)
{
    int quit = 0;
    std::string response;
    phoneBook phoneBookInstance;

    while (!quit)
    {
        if (std::cin.eof())
            break;
        std::cout << "1 - ADD" << std::endl;
        std::cout << "2 - SEARCH" << std::endl;
        std::cout << "3 - EXIT" << std::endl;
        std::cout << "entre action : ";
        std::getline(std::cin, response);
        if (response == "ADD")
            phoneBookInstance.addContact();
        else if (response == "SEARCH")
            phoneBookInstance.search();
        else if (response == "EXIT")
            quit = 1;
        else if (std::cin.eof())
        {
            std::cout << "ADIOS\n";
            break;
        }
        else
            continue;
    }
    return (0);
}
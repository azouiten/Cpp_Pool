/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:40:50 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/08 15:09:46 by azouiten         ###   ########.fr       */
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
        else if (std::cin.eof() || !std::cin.good())
            break;
        else
            continue;
    }
    return (0);
}
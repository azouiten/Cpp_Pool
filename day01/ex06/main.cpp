/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 11:32:56 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/28 16:08:48 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "nothing to filter\n";
        return (0);
    }
    Karen   kren;
    std::string level = std::string(argv[1]);
    int i = 0;
    
    while (i < (int)kren.levels->length() && kren.levels[i] != level)
        i += 1;

    switch (i)
    {
        case 0    :
            std::cout << "[DEBUG]\n";
            kren.complain(argv[1]);
        case 1     :
            std::cout << "[INFO]\nI cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
        case 2    :
            std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month!" << std::endl;
        case 3    :
            std::cout << "[ERROR]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return (0);
}
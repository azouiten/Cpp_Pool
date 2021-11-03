/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:57:43 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/28 16:07:34 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

std::string Karen::levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
void        (Karen::*(Karen::funcs)[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

Karen::Karen(void)
{
    std::cout << "A Karen has entered the store!" << std::endl;
}

Karen::~Karen(void)
{
    std::cout << "A Karen has stormed out!" << std::endl;
}

void    Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month!" << std::endl;
}

void    Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::complain(std::string level)
{
    int i;

    i = 0;
    while (i < 4 && levels[i] != level)
        i += 1;
    if (i < 4)
        (this->*funcs[i])();

}
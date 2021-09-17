/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 18:43:45 by azouiten          #+#    #+#             */
/*   Updated: 2021/07/28 16:36:59 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

contact::contact(void)
{
    std::cout << "Registering contact " << std::endl;
}

contact::~contact(void)
{
    
}

void    contact::fill(std::string first_name, std::string last_name, std::string nickname, std::string darkest_secret) 
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->darkest_secret = darkest_secret;
}
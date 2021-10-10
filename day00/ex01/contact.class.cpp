/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 18:43:45 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/09 09:04:46 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

contact::contact(void){}

contact::~contact(void){}

std::string contact::getFirstName(void)
{
    return (first_name);
}

std::string contact::getLastName(void)
{
    return (last_name);
}

std::string contact::getPhoneNumber(void)
{
    return (phoneNumber);
}

std::string contact::getNickname(void)
{
    return (nickname);
}

std::string contact::getDarkestSecret(void)
{
    return (darkest_secret);
}

void    contact::fill(std::string first_name, std::string last_name, std::string nickname, std::string phoneNumber, std::string darkest_secret) 
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phoneNumber = phoneNumber;
    this->darkest_secret = darkest_secret;
}
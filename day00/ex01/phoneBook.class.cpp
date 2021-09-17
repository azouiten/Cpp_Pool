/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 19:22:17 by azouiten          #+#    #+#             */
/*   Updated: 2021/07/28 17:01:24 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

phoneBook::phoneBook(void)
{
    this->current_size = 0;
}

phoneBook::~phoneBook(void)
{
    
}

void    phoneBook::addContact()
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;

    if (current_size == PHONEBOOK_MAXZISE)
    {
        this->current_size = 0;
    }
    std::cout << "Entre first name      : ";
    std::cin >> first_name;
    std::cout << "Entre last name       : ";
    std::cin >> last_name;
    std::cout << "Entre nickname        : ";
    std::cin >> nickname;
    std::cout << "Entre darkest secret  :";
    std::cin >> darkest_secret;
    this->contact_table[this->current_size].fill(first_name, last_name, nickname, darkest_secret);
    this->current_size += 1;
}

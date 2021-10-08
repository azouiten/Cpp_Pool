/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 19:22:17 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/08 16:34:04 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.class.hpp"

phoneBook::phoneBook(void)
{
    currentSize = 0;
    actualSize = 0;
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
    std::string phoneNumber;

    if (currentSize == PHONEBOOK_MAXZISE)
    {
        currentSize = 0;
    }

    std::cout << "Entre first name      :   ";
    std::getline(std::cin, first_name);
    std::cout << "Entre last name       :   ";
    std::getline(std::cin, last_name);
    std::cout << "Entre Phone number    :   ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Entre nickname        :   ";
    std::getline(std::cin, nickname);
    std::cout << "Entre darkest secret  :   ";
    std::getline(std::cin, darkest_secret);
    contact_table[currentSize].fill(first_name, last_name, nickname, phoneNumber, darkest_secret);
    currentSize += 1;
    if (actualSize != PHONEBOOK_MAXZISE)
        actualSize += 1;
}

void    phoneBook::search(void)
{
    int index = 0;
    int ind = 0;
    std::string iind;

    std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << "|\n";
    while (index < actualSize)
    {
        std::cout << "|" << std::setw(10) << index << "|";
        if (contact_table[index].getFirstName().length() > 10)
            std::cout << contact_table[index].getFirstName().substr(0, 9) << "." << "|";
        else
            std::cout << std::setw(10) << contact_table[index].getFirstName() << "|";
        if (contact_table[index].getLastName().length() > 10)
            std::cout << contact_table[index].getLastName().substr(0, 9) << "." << "|";
        else
            std::cout << std::setw(10) << contact_table[index].getLastName() << "|";
        if (contact_table[index].getNickname().length() > 10)
            std::cout << contact_table[index].getNickname().substr(0, 9) << "." << "|\n";
        else
            std::cout << std::setw(10) << contact_table[index].getNickname() << "|\n";
        index += 1;
    }
    std::cout << "Enter index:";
    std::getline(std::cin, iind);
    try 
    {
        ind = stoi(iind);
    }
    catch (...)
    {
        std::cout << "Invalid index!\n";
        ind = 100;
    }
        
    if (ind > actualSize || ind >= 0)
        std::cout << "Invalid input!\n";
    else
    {
        std::cout << "First name        :   " << contact_table[ind].getFirstName() << std::endl;
        std::cout << "Last name         :   " << contact_table[ind].getLastName() << std::endl;
        std::cout << "Phone number      :   " << contact_table[ind].getPhoneNumber() << std::endl;
        std::cout << "Nickname          :   " << contact_table[ind].getNickname() << std::endl;
        std::cout << "Darkest secret    :   " << contact_table[ind].getDarkestSecret() << std::endl;
    }

}


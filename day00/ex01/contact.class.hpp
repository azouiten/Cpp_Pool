/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 18:45:39 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/08 16:17:00 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS
# define CONTACT_CLASS

#include <iostream>

class   contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phoneNumber;
    std::string darkest_secret;


public:
    contact();
    ~contact();
    std::string getFirstName();
    std::string getLastName();
    std::string getPhoneNumber();
    std::string getNickname();
    std::string getDarkestSecret();

    void    fill(std::string first_name, std::string last_name, std::string nickname,std::string phoneNumber , std::string darkest_secret);
};

#endif
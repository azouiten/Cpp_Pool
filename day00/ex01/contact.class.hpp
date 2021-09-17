/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 18:45:39 by azouiten          #+#    #+#             */
/*   Updated: 2021/07/28 16:37:06 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS
# define CONTACT_CLASS

#include <iostream>

class   contact
{
private:
    int         index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;

public:

    contact();
    ~contact();

    void    fill(std::string first_name, std::string last_name, std::string nickname, std::string darkest_secret);
};

#endif
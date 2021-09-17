/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 19:22:21 by azouiten          #+#    #+#             */
/*   Updated: 2021/07/28 17:01:35 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS
#define PHONEBOOK_CLASS
#include "contact.class.hpp"

#define PHONEBOOK_MAXZISE 8

class phoneBook
{
private:
    contact contact_table[8];
    int     current_size;
public:

    phoneBook();
    ~phoneBook();

    void    addContact();
    void    search();
};

#endif
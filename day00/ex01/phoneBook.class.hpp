/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 19:22:21 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/08 10:51:31 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS
#define PHONEBOOK_CLASS
#include "contact.class.hpp"
#include <iomanip>

#define PHONEBOOK_MAXZISE 8

class phoneBook
{
private:
    contact contact_table[8];
    int     currentSize;
    int     actualSize;
    
public:

    phoneBook(void);
    ~phoneBook(void);

    void    addContact(void);
    void    search(void);
};

#endif
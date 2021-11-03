/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:57:36 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/22 11:58:18 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP
#include <iostream>

class Data
{
public:
    Data(void);
    Data(Data const & src);
    ~Data(void);

    Data& operator=(Data const & rhs);
};

#endif
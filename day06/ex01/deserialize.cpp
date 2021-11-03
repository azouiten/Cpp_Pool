/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:05:27 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/22 12:04:23 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:14:38 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/17 18:18:34 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* zmbie_horde = zombieHorde(10, "blob");
    Zombie* current = zmbie_horde;
    int     N;

    N = 10;
    while (N)
    {
        current->announce();
        N -= 1;
        current += 1;
    }
    delete [] zmbie_horde;
    return (0);
}
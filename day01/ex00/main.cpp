/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:18:31 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/17 17:06:27 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* zmbie = newZombie("Creeper");
    
    zmbie->announce();
    delete zmbie;
    randomChump("Biter");
    return (0);
}
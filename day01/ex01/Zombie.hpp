/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:56:11 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/17 18:14:32 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_H_
#define _ZOMBIE_H_

#include <iostream>


class Zombie
{
private:
    std::string name;
public:
    Zombie(void);
    Zombie(std::string  name);
    ~Zombie();
    void    announce(void);
    void    setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif

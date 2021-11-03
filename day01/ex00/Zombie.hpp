/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:56:11 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/28 16:23:35 by azouiten         ###   ########.fr       */
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
        void    announce(void);
        ~Zombie();
};

void    randomChump(std::string name);
Zombie* newZombie( std::string name);

#endif

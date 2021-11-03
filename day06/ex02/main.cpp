/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:50:32 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/26 16:54:49 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>


Base * generate(void)
{
    int rand;

    rand = std::rand() % 3;
    if (rand == 0)
        return (new A());
    else if (rand == 1)
        return(new B());
    return(new C());
}

void    identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "B\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "C\n";
}

void    identify(Base& p)
{
    try
    {
        A& ref = dynamic_cast<A&>(p);
        std::cout << "A\n";
        return;
    }
    catch(std::exception& e){}
    try
    {
        B& ref = dynamic_cast<B&>(p);
        std::cout << "B\n";
        return;
    }
    catch(std::exception& e){}
    try
    {
        C& ref = dynamic_cast<C&>(p);
        std::cout << "C\n";
        return;
    }
    catch(std::exception& e){}

}

int main(void)
{
    std::srand(time(0));
    Base* ptr = generate();
    Base& ref = *generate();

    identify(ptr);
    identify(ref);
    delete ptr;
    delete &ref;
    return (0);
}
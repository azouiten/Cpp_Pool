/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:03:36 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/19 15:14:53 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void){}

Intern::Intern(Intern const & src)
{
    if (this != &src)
        *this = src;
}

Intern::~Intern(void){}

const char * Intern::UnkownFormExeption::what() const throw()
{
    return ("Invalid Form Name!\n");
}

Form* Intern::makeForm(std::string name, std::string target)
{
    std::string forms[3] = {"Presidential Pardon Form", "Robotomy Request Form", "Shrubbery Creation Form"};
    int index = 0;
    while(index < 3 && name != forms[index])
        index += 1;
    try
    {
        switch (index)
        {
            case 0 : std::cout << "Intern creates " << name << std::endl;
                return (new PresidentialPardonForm(target));
            case 1 : std::cout << "Intern creates " << name << std::endl;
                return (new RobotomyRequestForm(target));
            case 2 : std::cout << "Intern creates " << name << std::endl;
                return (new ShrubberyCreationForm(target));
            default: throw (UnkownFormExeption());
        }
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (NULL);
}

Intern & Intern::operator=(Intern const & rhs)
{}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:03:36 by azouiten          #+#    #+#             */
/*   Updated: 2022/08/04 11:56:38 by azouiten         ###   ########.fr       */
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

Form*   Intern::ShrubberyForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

Form*   Intern::RobotomyForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

Form*   Intern::PresidentForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(std::string name, std::string target)
{
    std::string forms[3] = {"Presidential Pardon Form", "Robotomy Request Form", "Shrubbery Creation Form"};
    functions funcs[3] = {PresidentForm, RobotomyForm, ShrubberyForm};
    int index = 0;

    while(index < 3 && name != forms[index])
        index += 1;
    if (index >= 3)
        throw (UnkownFormExeption());
    return funcs[index](target);
}

Intern & Intern::operator=(Intern const & rhs)
{
    (void)rhs;
    return *this;
}
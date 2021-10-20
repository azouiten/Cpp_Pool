/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:02:50 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/19 15:52:08 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
    Intern(void);
    Intern(Intern const & src);
    ~Intern(void);
    
    class UnkownFormExeption :  std::exception
    {
    public:
        virtual const char * what() const throw();
    };
    Form* makeForm(std::string name, std::string target);
    Intern & operator=(Intern const & rhs);
};

#endif
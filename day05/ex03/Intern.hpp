/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:02:50 by azouiten          #+#    #+#             */
/*   Updated: 2022/08/02 18:54:04 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

typedef Form* (*functions) (std::string a);

class Intern
{
private:
    static Form*   ShrubberyForm(std::string target);
    static Form*   RobotomyForm(std::string target);
    static Form*   PresidentForm(std::string target);
public:
    Intern(void);
    Intern(Intern const & src);
    ~Intern(void);
    
    class UnkownFormExeption : public std::exception
    {
    public:
        virtual const char * what() const throw();
    };
    Form* makeForm(std::string name, std::string target);
    Intern & operator=(Intern const & rhs);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:11:56 by azouiten          #+#    #+#             */
/*   Updated: 2022/08/04 13:18:45 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    _grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
    if (this != &src)
        *this = src;
}

Bureaucrat::~Bureaucrat(void)
{
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return "That grade is too high!\n";
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return "That grade is too low!\n";
}

std::string const & Bureaucrat::getName(void) const
{
    return (_name);
}

int Bureaucrat::getGrade(void) const
{
    return (_grade);
}

void    Bureaucrat::incrementGrade(void)
{
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    _grade -= 1;
}

void    Bureaucrat::decrementGrade(void)
{
    
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    _grade += 1;
}

void    Bureaucrat::signForm(bool permission, std::string name)
{
    if (permission)
    std::cout << _name << " signed " << name;
    else
        std::cout << _name << " cannot be signed " << name << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
    (std::string)_name = rhs.getName();
    _grade = rhs.getGrade();
    return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.getName() << ", Bureaucrat grade " << rhs.getGrade() << std::endl;
    return(o);
}
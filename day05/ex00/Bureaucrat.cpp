/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:11:56 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/18 14:50:18 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    _grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    try 
    {
        if (grade > 150)
            throw GradeTooLowException();
        else if (grade < 1)
            throw GradeTooHighException();
    }
    catch (std::exception &e)
    {
        e;
    }
    (std::string)_name = name;
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
    return ("That grade is too high!\n");
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("That grade is too low!\n");
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
    try 
    {
        if (_grade - 1 < 1)
            throw GradeTooHighException();
    }
    catch (std::exception & e)
    {
        e;
    }
}

void    Bureaucrat::decrementGrade(void)
{
    try 
    {
        if (_grade + 1 > 150)
            throw GradeTooLowException();
    }
    catch (std::exception & e)
    {
        e;
    }
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
    (std::string)_name = rhs.getName();
    _grade = rhs.getGrade();
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.getName() << ", Bureaucrat grade " << rhs.getGrade() << std::endl;
    return(o);
}
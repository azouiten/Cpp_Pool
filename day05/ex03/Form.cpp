/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:51:43 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/18 17:56:57 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _signed(false)
{}

Form::Form(std::string name, int gradeSign, int gradeExec) : _signed(false), _name(name)
{
    try 
    {
        if (gradeSign > 150 || gradeExec > 150)
            throw Form::GradeTooLowException();
        else if (gradeSign < 1 || gradeExec < 1)
            throw Form::GradeTooHighException();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;;
    }
    _gradeExec = gradeExec;
    _gradeSign = gradeSign;
}

const char * Form::GradeTooHighException::what() const throw()
{
    return ("grade too high!\n");
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("grade too low!\n");
}

const char * Form::FormNotSignedException::what() const throw()
{
    return ("Form not signed!\n");
}

Form::Form(Form const & src)
{
    if (this != &src)
        *this = src;
}

Form::~Form(void)
{}

void    Form::beSigned(Bureaucrat & bureaucrat)
{
    try
    {
        if (bureaucrat.getGrade() > _gradeSign)
        {
            bureaucrat.signedForm(false, _name);
            throw Form::GradeTooLowException();
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    _signed = true;
    bureaucrat.signedForm(true, _name);
}

std::string Form::getName(void) const
{
    return (_name);
}

bool    Form::getStatus(void) const
{
    return (_signed);
}

int     Form::getGradeSign(void) const
{
    return (_gradeSign);
}

int     Form::getGradeExec(void) const
{
    return (_gradeExec);
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
    o << "Form " << rhs.getName() << " demands grade " << rhs.getGradeSign() << " and is ";
    if (rhs.getStatus())
        o << " signed.\n";
    else
        o << " not signed.\n";
    
    return(o);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:51:43 by azouiten          #+#    #+#             */
/*   Updated: 2022/08/04 11:40:46 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _signed(false), _gradeSign(150), _gradeExec(150)
{}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _signed(false),\
    _gradeSign(checkGrade(gradeSign)), _gradeExec(checkGrade(gradeExec))
{}

int     Form::checkGrade(int grade)
{
    if (grade > 150)
        throw Form::GradeTooLowException();
    else if (grade < 1)
        throw Form::GradeTooHighException();
    return grade;
}

const char * Form::GradeTooHighException::what() const throw()
{
    return ("grade too high!\n");
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("grade too low!\n");
}

Form::Form(Form const & src) : _name(src.getName()),\
_gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec())
{
    if (this != &src)
        *this = src;
}

Form::~Form(void)
{}

void    Form::beSigned(Bureaucrat & bureaucrat)
{

    if (bureaucrat.getGrade() > _gradeSign)
        throw Form::GradeTooLowException();
    _signed = true;
    bureaucrat.signForm(true, _name);
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

Form & Form::operator=(Form const& rhs)
{
    _signed = rhs.getStatus();
    return *this;
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
    o << "Form " << rhs.getName() << " demands grade " << rhs.getGradeSign() << " and is ";
    if (rhs.getStatus())
        o << "signed.";
    else
        o << "not signed.";
    
    return(o);
}
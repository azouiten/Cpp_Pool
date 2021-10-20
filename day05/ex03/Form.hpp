/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:02:40 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/18 17:55:48 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Form
{
private:
    std::string const _name;
    bool    _signed;
    int     _gradeSign;
    int     _gradeExec;
public:
    Form(void);
    Form(std::string name, int gradeSign, int gradeExec);
    Form(Form const & src);
    ~Form(void);

    std::string getName(void) const;
    int     Form::getGradeSign(void) const;
    int     Form::getGradeExec(void) const;
    bool    getStatus(void) const;
    void    beSigned(Bureaucrat & bureaucrat);
    Form & operator=(Form const & rhs);
    class GradeTooHighException
    {
        public:
        virtual const char * what(void) const throw();
    };
    class GradeTooLowException
    {
        public:
        virtual const char * what(void) const throw();
    };
    class FormNotSignedException
    {
        public:
        virtual const char * what(void) const throw();
    };
    virtual void execute(Bureaucrat const & executor) const = 0;
};

#endif
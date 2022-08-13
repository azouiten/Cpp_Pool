/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:02:40 by azouiten          #+#    #+#             */
/*   Updated: 2022/08/02 18:04:57 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

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

    static int checkGrade(int grade);
    std::string getName(void) const;
    int     getGradeSign(void) const;
    int     getGradeExec(void) const;
    bool    getStatus(void) const;
    void    beSigned(Bureaucrat & bureaucrat);
    Form & operator=(Form const & rhs);
    class GradeTooHighException : public std::exception
    {
        public:
        virtual const char * what(void) const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
        virtual const char * what(void) const throw();
    };
    class FormNotSignedException : public std::exception
    {
        public:
        virtual const char * what(void) const throw();
    };
    virtual void execute(Bureaucrat const & executor) const = 0;
};
std::ostream & operator<<(std::ostream & o, Form const & rhs);
#endif
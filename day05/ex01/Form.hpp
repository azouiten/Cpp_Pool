/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:02:40 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/18 17:18:21 by azouiten         ###   ########.fr       */
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
    int const _gradeSign;
    int const _gradeExec;
public:
    Form(void);
    Form(std::string name, int gradeSign, int gradeExec);
    Form(Form const & src);
    ~Form(void);

    static int checkGrade(int grade);
    std::string getName(void) const;
    int    getGradeSign(void) const;
    int    getGradeExec(void) const;
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
};
std::ostream & operator<<(std::ostream & o, Form const & rhs);
#endif
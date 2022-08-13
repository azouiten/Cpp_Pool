/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:42:35 by azouiten          #+#    #+#             */
/*   Updated: 2022/08/04 13:17:44 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include "Form.hpp"
#include <iostream>

class Form;

class Bureaucrat
{
private:
    std::string const _name;
    int _grade;
public:
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what(void) const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what(void) const throw();
    };
    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const & src);
    ~Bureaucrat(void);

    void    signedForm(bool permission, std::string name);
    std::string const &    getName(void) const;
    int    getGrade(void) const;
    void    incrementGrade(void);
    void    decrementGrade(void);
    void    executeForm(Form const & form) const;
    Bureaucrat & operator=(Bureaucrat const & rhs);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
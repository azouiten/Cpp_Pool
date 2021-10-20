/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:58:54 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/18 19:20:15 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential Pardon Form", 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 25, 5), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
    if (this != &src)
        *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void){}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (executor.getGrade() > getGradeExec())
            throw GradeTooLowException();
        else if (!getStatus())
            throw FormNotSignedException();
            
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << _target << " has been pardoned by Zafod Beeblebrox.\n";
    executor.executeForm(*this);
}
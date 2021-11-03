/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:55:14 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/23 11:48:37 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy Request Form", 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form", 72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
    if (this != &src)
        *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void){}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    std::srand(time(0));
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
    std::cout << "*drilling noises*";
    if (std::rand() % 2)
        std::cout << _target << " has been robotomized successfully!\n";
    else
        std::cout << _target << " robotomization has Failed!\n";
    executor.executeForm(*this);
}
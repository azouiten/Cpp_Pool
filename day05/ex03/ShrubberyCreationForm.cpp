/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:29:11 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/18 19:20:19 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery Creation Form",145,137){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form",145,137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
    if (this != &src)
        *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
    std::ofstream file(_target + ">_shrubbery");
    file << "               ,@@@@@@@,\n       ,,,.   ,@@@@@@/@@,  .oo8888o.\n    ,&%%&%&&%,@@@@@/@@@@@@,8888\88/8o\n   ,%&\%&&%&&%,@@@\@@@/@@@88\88888/88'\n   %&&%&%&/%&&%@@\@@/ /@@@88888\88888'\n   %&&%/ %&%%&&@@\ V /@@' 88\\8 /88'\n   &%\\  /%&'    |.|        \ '|8'\n       |o|        | |         | |\n       |.|        | |         | |\n     \/ .\////  ,\_//\/.  \//__/";
    executor.executeForm(*this);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:29:10 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/18 17:59:10 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
    std::string _target;
public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    ~ShrubberyCreationForm(void);
    
    virtual void execute(Bureaucrat const & executor) const;
};

#endif
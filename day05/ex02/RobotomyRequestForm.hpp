/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:54:06 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/18 17:04:07 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string _target;
public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const & src);
    ~RobotomyRequestForm(void);
    
    virtual void execute(Bureaucrat const & executor) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:57:05 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/18 17:04:35 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string _target;
public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const & src);
    ~PresidentialPardonForm(void);

    virtual void execute(Bureaucrat const & executor) const;
};

#endif
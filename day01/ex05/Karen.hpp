/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:57:46 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/20 18:03:01 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
#define KAREN_H
#include <iostream>


class   Karen
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    Karen();
    ~Karen();
    void complain(std::string level);
};

void        (*funcs[])(void) = {debug, info, warning, error};
std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
#endif
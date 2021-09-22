/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:57:46 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/21 12:06:46 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
#define KAREN_H
#include <iostream>

// typedef void (Karen::*funcs)(void);


class   Karen
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    static  void (Karen::*funcs[])(void);
    // static  funcs   tab[];
    
public:
    static  std::string levels[];
    Karen();
    ~Karen();
    void complain(std::string level);
};

#endif
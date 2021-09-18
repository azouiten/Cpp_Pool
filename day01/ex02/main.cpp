/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 10:31:03 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/18 10:41:33 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string strng = "HI THIS IS BRAIN";
    std::string*   stringPTR = &strng;
    std::string&   stringREF = strng;

   std::cout << &strng << std::endl;
   std::cout << stringPTR << std::endl;
   std::cout << &stringREF << std::endl;
   std::cout << *stringPTR << std::endl;
   std::cout << stringREF << std::endl;
    return (0);
}
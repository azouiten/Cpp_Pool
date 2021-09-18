/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:04:47 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/18 17:20:56 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cout << "Wrong number of parameters."<< std::endl;
        return (0);
    }
    try
    {
        std::ifstream	ifs("numbers");
    }
    catch 
    {
        std::cout << "Could not open the file."<< std::endl;
    }

    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:15:10 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/20 17:16:46 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

static void error(void)
{
    std::cout << "Error\n";
    std::exit(1);
}

static float parseValue(std::string value)
{
    int index = 0;
    int isChar = 0;

    if (value.length() == 1)
    while (value[index])
    {
        if ((value[index] > 9 || value[index] < 0) && index != 0)
            error();
        index += 1;
    }
    return ();
}

static void printNan(std::string value)
{
    std::cout << "char  :   impossible\n";
    std::cout << "int   :   impossible\n";
    if (std::string(value) == "-inf" || std::string(value) == "+inf" || std::string(value) == "nan")
    {
        std::cout << "float :   " << value << "f\n";
        std::cout << "double:   " << value << std::endl;
    }
    else
    {
        std::cout << "float :   " << value << std::endl;
        std::cout << "double:   " << value.substr(0, 3) << std::endl;
    }
    std::exit(0);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        error();
    if (std::string(argv[1]) == "-inf" || std::string(argv[1]) == "+inf" || std::string(argv[1]) == "nan" ||
    std::string(argv[1]) == "-inff" || std::string(argv[1]) == "+inff" || std::string(argv[1]) == "nanf")
        printNan(argv[1]);
    float val = parseValue(argv[1]);
    return (0);
}
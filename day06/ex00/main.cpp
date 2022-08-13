/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:15:10 by azouiten          #+#    #+#             */
/*   Updated: 2022/08/11 17:30:29 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

static void error(std::string msg)
{
    std::cout << "Error : " << msg << std::endl;
    std::exit(1);
}

static double parseValue(std::string value)
{
    int index = 0;

    if (value.length() == 1)
        return(std::stod(value));
    while (index < (int)value.length())
    {
        if ((value[index] > '9' || value[index] < '0') && value[index] != 'f' && value[index] != '.')
            error("wrong character");
        index += 1;
    }
    return (std::stod(value));
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
        std::cout << "double:   " << value.substr(0, value.length() - 1) << std::endl;
    }
    std::exit(0);
}

static void printValue(double val)
{
    if ((val >= 0 && val <= 31) || val > 127)
        std::cout << "char  :   Non displayable\n";
    else
        std::cout << "char  :   " << static_cast<char>(val) << std::endl;
    std::cout << "int   :   " << static_cast<int>(val) << std::endl;
    std::cout << "float :   " << std::fixed << std::setprecision(1) << static_cast<float>(val) << "f" << std::endl;
    std::cout << "double:   " << val << std::endl;
}

int main(int argc, char **argv)
{

    if (argc != 2)
        error("args");
    if (std::string(argv[1]) == "-inf" || std::string(argv[1]) == "+inf" || std::string(argv[1]) == "nan" ||
    std::string(argv[1]) == "-inff" || std::string(argv[1]) == "+inff" || std::string(argv[1]) == "nanf")
        printNan(argv[1]);
    double val;
    try 
    {
        val = parseValue(argv[1]);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
        error("double conversion");
    }
    printValue(val);
    return (0);
}
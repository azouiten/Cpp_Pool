/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:04:47 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/28 15:53:44 by azouiten         ###   ########.fr       */
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
    std::ifstream	ifs(argv[1]);
    std::string     line;
    std::string     allLines;
    int             pos;

    while(std::getline(ifs,line,'\n'))
        allLines += line + "\n";
    if (allLines.empty())
    {
        ifs.close();
        std::cout << "Error" << std::endl;
        return (0);
    }
    std::string     oFile = argv[1] + std::string(".replace");
    std::ofstream   ofs(oFile);
    pos = allLines.find(argv[2], 0);
    while(pos != (int)std::string::npos)
    {
        allLines.erase(pos, std::string(argv[2]).length());
        allLines.insert(pos, std::string(argv[3]));
        pos = allLines.find(argv[2], pos + 1);
    }
    ofs << allLines;
    ifs.close();
    ofs.close();
    return (0);
}
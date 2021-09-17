/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:12:17 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/08 12:24:21 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype>

int     main(int arc, char **arv)
{
    char    *res;
    char    c;
    int     i;
    int     j;
    
    i = 1;
    j = 1;
    c = 0;
    res = NULL;
    if (arc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < arc)
        {
            j = 0;
            while (arv[i][j])
            {
                c = toupper(arv[i][j]);
                std::cout << c;
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}
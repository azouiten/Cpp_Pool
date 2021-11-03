/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:27:31 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/29 18:10:50 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename U = std::deque<T> >
class MutantStack : public std::stack<T, U>
{
public:
    MutantStack(void){}
    MutantStack(MutantStack const & src)
    {
        if (this != &src)
            *this = src;
    }
    typedef typename std::stack<T, U>::container_type::iterator iterator;
    typedef typename std::stack<T, U>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T, U>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T, U>::container_type::const_reverse_iterator const_reverse_iterator;
    
    iterator begin(void){return (this->c.begin());}
    iterator end(void){return (this->c.end());}
    
    const_iterator cbegin(void){return (this->c.cbegin());}
    const_iterator cend(void){return (this->c.cend());}

    reverse_iterator rbegin(void){return (this->c.rbegin());}
    reverse_iterator rend(void){return (this->c.rend());}

    const_reverse_iterator crbegin(void){return (this->c.crbegin());}
    const_reverse_iterator crend(void){return (this->c.crend());}
    
    MutantStack & operator=(MutantStack const & rhs)
    {
        this->c = rhs.c;
        return (*this);
    }
    ~MutantStack(void){}
};

#endif
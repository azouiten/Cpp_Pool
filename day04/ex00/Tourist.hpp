/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tourist.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:17:48 by azouiten          #+#    #+#             */
/*   Updated: 2021/10/06 13:19:59 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOURIST_HPP
#define TOURIST_HPP

#include "Victim.hpp"

class Tourist : public Victim
{
private:
    Tourist(void);

public:
    Tourist(std::string name);
    ~Tourist(void);

    Tourist & operator=(Tourist const & rhs);
    virtual void getPolymorphed(void) const;
};

std::ostream & operator<<(std::ostream & o, Tourist const & rhs);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:49:53 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/09 14:02:34 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP
#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
public:
    AssaultTerminator();
    ~AssaultTerminator();
    AssaultTerminator(const AssaultTerminator &copie);
    AssaultTerminator &operator=(AssaultTerminator const &);
    virtual ISpaceMarine *clone() const;
    virtual void battleCry() const;
    virtual void rangedAttack() const;
    virtual void meleeAttack() const;
};

#endif
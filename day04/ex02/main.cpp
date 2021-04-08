/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:52:53 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/08 14:52:58 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
    ISpaceMarine *bob = new TacticalMarine;
    ISpaceMarine *jim = new AssaultTerminator;
    ISquad *vlc = new Squad;
    vlc->push(bob);
    // vlc->push(jim);
    // for (int i = 0; i < vlc->getCount(); ++i)
    // {
    //     ISpaceMarine *cur = vlc->getUnit(i);
    //     cur->battleCry();
    //     cur->rangedAttack();
    //     cur->meleeAttack();
    // }
    delete vlc;
    return 0;
}
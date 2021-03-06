/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 11:20:42 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/10 22:51:19 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria *_slots[4];

public:
    Character(std::string name);
    ~Character();
    Character(Character &copy);
    Character &operator=(Character const &copy);
    virtual std::string const &getName() const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter &target);
};

#endif
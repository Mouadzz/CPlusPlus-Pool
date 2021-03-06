/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:54:27 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/05 12:18:11 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedvalue = 0;
}
 
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &copie)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixedvalue = copie.fixedvalue;
    this->getRawBits();
}

Fixed &Fixed::operator=(const Fixed &b)
{
    std::cout << "Assignation operator called" << std::endl;
    this->fixedvalue = b.fixedvalue;
    this->getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedvalue;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedvalue = raw;
}
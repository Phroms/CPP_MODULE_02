/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:58:08 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/07 18:58:18 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed()
{
    this->_num = 0;
}

Fixed::Fixed(int data)
{
    this->_num = data;
}

Fixed::Fixed(const Fixed &cpy)
{
    this->_num = cpy._num;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    if (this != &rhs)
    {
        this->_num = rhs._num;
    }
    return (*this);
}

bool Fixed::operator<(const Fixed &other) const
{
    return _num < other._num
}

bool Fixed::operator>(const Fixed &other) const
{
    return _num > other._num
}

bool Fixed::operator>=(const Fixed &other) const
{
    return _num >= other._num;
}

bool Fixed::operator<=(const Fixed &other) const
{
    return _num <= other._num;
}

bool Fixed::opertator==(const Fixed &other) const
{
    return _num == other._num;
}

bool Fixed::operator!=(const Fixed &other) const
{
    return _num != other._num;
}

Fixed::Fixed::operator++()
{
    ++_num;
    return (*this);
}

Fixed::Fixed::operator++(int)
{
    Fixed temp = *this; //1. Guarda una copia del objeto actual (valor antes del incremento)
    ++_num; // 2. Incrementa el valor del objeto actual
    return (temp); // 3. Devuelve la copia guardada que contiene el valor original
}

Fixed::Fixed::operator--()
{
    --_num;
    return (*this);
}

Fixed::Fixed::operator--(int)
{
    Fixed temp = *this; // 1. Guarda una copia del objeto actual (valor antes del decremento)
    --_num; // 2. Decrementa el valor del objeto actual
    return (temp); // 3. Devuelve la copia guardada que contiene el valor original
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed._num;
    return (out);
}

Fixed::~Fixed()
{

}
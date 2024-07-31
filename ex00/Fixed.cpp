/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 19:07:28 by agrimald          #+#    #+#             */
/*   Updated: 2024/07/25 19:07:29 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Number::Number(int data)
{
    _num = data;
}

Number::Number(const Number &cpy)
{
    this->_num = cpy._num;
}

Number &Number::operator=(const Number &rhs)
{
    if (this != &rhs)
    {
        this->_num = rhs._num;
    }
    return (*this);
}

Number::~Number()
{
}

int getRawBits(void) const
{
    return _num;
}

void    setRawBits(int const raw)
{
    _num = raw;
}

//Number::Number(const Number &cpy) constructor de copia
//rhs = right hands(pasar de la derecha a la izquierda)
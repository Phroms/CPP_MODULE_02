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

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_num = 0;
}
       
Fixed::Fixed(int data)
{
    _num = data;
}

Fixed::Fixed(const Fixed &cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_num = cpy._num;
    std::cout << "Copy assignment operator called // <-- This line may be missing depending on your implementation" << std::endl;
    std::cout << "getRawBits member function called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    if (this != &rhs)
    {
        this->_num = rhs._num;
        std::cout << "Copy assignment operator called" << std::endl;
    }
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _num;
}

void    Fixed::setRawBits(int const raw)
{
    _num = raw;
}

//Number::Number(const Number &cpy) constructor de copia
//rhs = right hands(pasar de la derecha a la izquierda)
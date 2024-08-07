/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:53:55 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/06 16:54:04 by agrimald         ###   ########.fr       */
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
    std::cout << "Int constructor called" << std::endl;
    this->_num = data << 8; //aqui esta "<< 8 = 2 elevado a la 8 = 256" y si data tiene de valor 3 seria "3 x 2elevado a 8 = 3 x 256 = 768"
    //esto "<<" convierte un valor entero a un punto fijo
}

Fixed::Fixed(const Fixed &cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_num = cpy._num;
    std::cout << "Copy assignment operator called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->_num = rhs._num;
    }
    return (*this);
}

Fixed::Fixed(float data)
{
    std::cout << "Float constructor called" << std::endl;
    this->_num = static_cast<int>(data * 256.0f + (data >= 0 ? 0.5f : -0.5f));  //"data >= 0 ? 0.5f : -0.5f se lee -> si data es mayor o igual a 0 entonces usa 0.5f de lo contrario usa -0.5f"
}

float Fixed::tofloat() const
{
    return static_cast<float>(this->_num) / 256.0f;
}

int Fixed::toInt() const
{
    return this->_num >> 8; // esto ">>" convierte el valor a punto fijo a un entero
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.tofloat();
    return out;
}
/*std::string    prueba(std::string msg)
{
    std::cout << msg << "Compilado" << std::endl;
    return (msg);
}*/


/*
    ejemplo de float

    Si data es positivo o cero, se suma 0.5f para redondear el valor hacia arriba.
Si data es negativo, se resta 0.5f para redondear el valor hacia abajo (es decir, en dirección a un número entero menor).
 */ 
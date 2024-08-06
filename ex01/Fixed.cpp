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
    this->_num = data;
}

Fixed::Fixed()
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
/*std::string    prueba(std::string msg)
{
    std::cout << msg << "Compilado" << std::endl;
    return (msg);
}*/
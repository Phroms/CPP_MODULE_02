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

Number::Number()
{
};

std::string print_msg(std::string msg)
{
    msg = "\nmensaje\n";

    std::cout << msg << "\n\033[96mPrueba funciona!!!\033[0m" << std::endl;
    return (msg);
}

Number::~Number()
{
    std::cout << "Destructor called" << std::endl;
};
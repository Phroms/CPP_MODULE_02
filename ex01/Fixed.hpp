/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:54:15 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/06 16:54:40 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
    private:
        int _num;
    public:
        Fixed();
        Fixed(int data);
        Fixed(const Fixed &);
        Fixed &operator=(const Fixed &);
        Fixed(float data);
        float tofloat()const;
        int   toInt()const;
        ~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
int main();
//std::string prueba(std::string msg);

# endif

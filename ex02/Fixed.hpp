/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:58:35 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/07 19:10:04 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
    private:
        int _num;
        static const int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(int data);
        Fixed(const Fixed &);
        Fixed(float data);
        int getRawBits() const;
        void    setRawBits(int const raw);
        float toFloat() const;
        int toInt() const;
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        Fixed &operator=(const Fixed &rhs);
        bool operator<(const Fixed &other) const;
        bool operator>(const Fixed &other) const;
        bool operator>=(const Fixed &other)const;
        bool operator<=(const Fixed &other)const;
        bool operator==(const Fixed &other)const;
        bool operator!=(const Fixed &other)const;
        Fixed operator++(); 
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);
        Fixed operator*(const Fixed &other);
        ~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

# endif

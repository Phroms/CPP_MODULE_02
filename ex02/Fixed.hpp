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

class Fixed
{
    private:
        int _num;
    public:
        Fixed();
        Fixed(int data);
        Fixed(const Fixed &);
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        Fixed &operator=(const Fixed &rhs);
        bool operator<(const Fixed &other);
        bool operator>(const Fixed &other);
        bool operator>=(const Fixed &other);
        bool operator<=(const Fixed &other);
        bool operator==(const Fixed &other);
        bool operator!=(const Fixed &other);
        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);
        Fixed operator*(const Fixed &other);
        ~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
int main();

# endif
